/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004964D8
 * Mangled: _ZN5Caver9GUIButtonD0Ev
 * Demangled: Caver::GUIButton::~GUIButton()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F80D0  Caver::GUIButton::~GUIButton()
 *   0x0000000000496510  Caver::GUIControl::~GUIControl()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000004964E8 string=0x00000000001F80D0 "0'"
 *   insn=0x00000000004964F4 string=0x00000000004964F8 "n"
 *   insn=0x00000000004964F8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000496500 string=0x0000000000496504 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIButton::~GUIButton(Caver::GUIButton *this)
{
  Caver::GUIButton::~GUIButton(this);
  operator delete(this);
}

