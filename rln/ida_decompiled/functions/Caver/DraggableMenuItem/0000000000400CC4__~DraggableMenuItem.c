/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000400CC4
 * Mangled: _ZN5Caver17DraggableMenuItemD0Ev
 * Demangled: Caver::DraggableMenuItem::~DraggableMenuItem()
 *
 * Callers: 1
 *   0x0000000000400AD8  Caver::DraggableMenuItem::~DraggableMenuItem()
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202E30  Caver::DraggableMenuItem::~DraggableMenuItem()
 *   0x0000000000400CFC  Caver::GUIDraggableItem::HitTest(Caver::Vector2 const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000400CD0 string=0x0000000000400CD4 "W"
 *   insn=0x0000000000400CE0 string=0x0000000000400CE4 "s"
 *   insn=0x0000000000400CE4 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000400CEC string=0x0000000000400CF0 "p"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DraggableMenuItem::~DraggableMenuItem(Caver::DraggableMenuItem *this)
{
  Caver::DraggableMenuItem::~DraggableMenuItem(this);
  operator delete(this);
}

