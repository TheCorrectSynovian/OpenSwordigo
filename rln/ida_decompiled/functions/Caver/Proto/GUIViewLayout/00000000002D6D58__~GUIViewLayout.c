/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D6D58
 * Mangled: _ZN5Caver5Proto13GUIViewLayoutD0Ev
 * Demangled: Caver::Proto::GUIViewLayout::~GUIViewLayout()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEA90  Caver::Proto::GUIViewLayout::~GUIViewLayout()
 *   0x00000000002D6D90  Caver::Proto::GUIViewLayout::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002D6D64 string=0x00000000002D6D68 "J"
 *   insn=0x00000000002D6D74 string=0x00000000002D6D78 "N"
 *   insn=0x00000000002D6D78 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002D6D80 string=0x00000000002D6D84 "K"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::GUIViewLayout::~GUIViewLayout(Caver::Proto::GUIViewLayout *this)
{
  Caver::Proto::GUIViewLayout::~GUIViewLayout(this);
  operator delete(this);
}

