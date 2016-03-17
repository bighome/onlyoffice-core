#pragma once

#include "Ptg.h"

namespace XLS
{

class CFRecord;

class PtgTbl : public Ptg
{
	BASE_STRUCTURE_DEFINE_CLASS_NAME(PtgTbl)
public:
	PtgTbl();
	BiffStructurePtr clone();

	virtual void loadFields(CFRecord& record);
	virtual void storeFields(CFRecord& record);

	virtual void assemble(AssemblerStack& ptg_stack, PtgQueue& extra_data, bool full_ref = false);

	static const unsigned short fixed_id = 0x02;

private:
	unsigned short row;
	unsigned short col;
};

typedef boost::shared_ptr<PtgTbl> PtgTblPtr;

} // namespace XLS

