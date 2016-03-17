
#include "PtgElfRadicalS.h"
#include <Binary/CFRecord.h>

namespace XLS
{


BiffStructurePtr PtgElfRadicalS::clone()
{
	return BiffStructurePtr(new PtgElfRadicalS(*this));
}


void PtgElfRadicalS::storeFields(CFRecord& record)
{
	record.reserveNunBytes(4); // unused
}


void PtgElfRadicalS::loadFields(CFRecord& record)
{
	record.skipNunBytes(4); // unused
}


void PtgElfRadicalS::assemble(AssemblerStack& ptg_stack, PtgQueue& extra_data, bool full_ref)
{
	// The significant tag follows (PtgArea or PtgAreaErr)
}


} // namespace XLS

