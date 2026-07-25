/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003CDB20
 * Mangled: _ZN5Caver20DraggableOverlayItemD0Ev
 * Demangled: Caver::DraggableOverlayItem::~DraggableOverlayItem()
 *
 * Callers: 1
 *   0x00000000003CD860  Caver::DraggableOverlayItem::~DraggableOverlayItem()
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201080  Caver::DraggableOverlayItem::~DraggableOverlayItem()
 *   0x00000000003CDB58  Caver::ExperienceBar::ExperienceBar(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000003CDB2C string=0x00000000003CDB30 "T"
 *   insn=0x00000000003CDB40 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003CDB50 string=0x00000000003CDB54 "\"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DraggableOverlayItem::~DraggableOverlayItem(Caver::DraggableOverlayItem *this)
{
  Caver::DraggableOverlayItem::~DraggableOverlayItem(this);
  operator delete(this);
}

