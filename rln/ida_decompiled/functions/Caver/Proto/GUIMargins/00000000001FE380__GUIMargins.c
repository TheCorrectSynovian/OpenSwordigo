/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE380
 * Mangled: ._ZN5Caver5Proto10GUIMarginsC2Ev
 * Demangled: Caver::Proto::GUIMargins::GUIMargins(void)
 *
 * Callers: 1
 *   0x00000000004A8028  Caver::GUIViewLayout::SaveToProtobufMessage(Caver::Proto::GUIViewLayout *)
 *
 * Callees: 1
 *   0x00000000002D603C  Caver::Proto::Program::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FE384 string=0x00000000002D6094 "h "
 *   insn=0x00000000001FE388 string=0x00000000001FE38C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GUIMargins::GUIMargins(Caver::Proto::GUIMargins *this)
{
  JUMPOUT(0x2D6094);
}

