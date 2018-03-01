﻿/*
 * (c) Copyright Ascensio System SIA 2010-2018
 *
 * This program is a free software product. You can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License (AGPL)
 * version 3 as published by the Free Software Foundation. In accordance with
 * Section 7(a) of the GNU AGPL its Section 15 shall be amended to the effect
 * that Ascensio System SIA expressly excludes the warranty of non-infringement
 * of any third-party rights.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR  PURPOSE. For
 * details, see the GNU AGPL at: http://www.gnu.org/licenses/agpl-3.0.html
 *
 * You can contact Ascensio System SIA at Lubanas st. 125a-25, Riga, Latvia,
 * EU, LV-1021.
 *
 * The  interactive user interfaces in modified source and object code versions
 * of the Program must display Appropriate Legal Notices, as required under
 * Section 5 of the GNU AGPL version 3.
 *
 * Pursuant to Section 7(b) of the License you must retain the original Product
 * logo when distributing the program. Pursuant to Section 7(e) we decline to
 * grant you any rights under trademark law for use of our trademarks.
 *
 * All the Product's GUI elements, including illustrations and icon sets, as
 * well as technical writing content are licensed under the terms of the
 * Creative Commons Attribution-ShareAlike 4.0 International. See the License
 * terms at http://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 */

#include "SXADDLSXFILTER12.h"
#include "../Biff_records/SXAddl.h"

namespace XLS
{


SXADDLSXFILTER12::SXADDLSXFILTER12()
{
}


SXADDLSXFILTER12::~SXADDLSXFILTER12()
{
}


BaseObjectPtr SXADDLSXFILTER12::clone()
{
	return BaseObjectPtr(new SXADDLSXFILTER12(*this));
}


/*
SXADDLSXFILTER12 = SXAddl_SXCSXFilter12_SXDId SXAddl_SXCSXFilter12_SXDSXFilter 
					[SXAddl_SXCSXFilter12_SXDCaption *Continue_SxaddlSxString] 
					[SXAddl_SXCSXFilter12_SXDSXFilterDesc *Continue_SxaddlSxString] 
					[SXAddl_SXCSXFilter12_SXDSXFilterValue1 *Continue_SxaddlSxString] 
					[SXAddl_SXCSXFilter12_SXDSXFilterValue2 *Continue_SxaddlSxString] 
					SXAddl_SXCSXFilter12_SXDXlsFilter 
					[SXAddl_SXCSXFilter12_SXDXlsFilterValue1 *Continue_SxaddlSxString] 
					[SXAddl_SXCSXFilter12_SXDXlsFilterValue2 *Continue_SxaddlSxString] SXAddl_SXCSXFilter12_SXDEnd
*/
const bool SXADDLSXFILTER12::loadContent(BinProcessor& proc)
{
	bool result = false;
	while (true)
	{
		CFRecordType::TypeId type = proc.getNextRecordType();	

		if (type == rt_SXAddl)
		{
			result = true;
			proc.optional<SXAddl>();

			SXAddl* addl = dynamic_cast<SXAddl*>(elements_.back().get());				
			if (!addl) continue;
			
			if (addl->bEndElement)
				break;
		}
		else
		{
			break;
		}
	}
	return result;
}

} // namespace XLS

