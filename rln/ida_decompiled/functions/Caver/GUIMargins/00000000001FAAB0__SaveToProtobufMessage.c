/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAAB0
 * Mangled: ._ZNK5Caver10GUIMargins21SaveToProtobufMessageEPNS_5Proto10GUIMarginsE
 * Demangled: Caver::GUIMargins::SaveToProtobufMessage(Caver::Proto::GUIMargins *)
 *
 * Callers: 1
 *   0x00000000004A8028  Caver::GUIViewLayout::SaveToProtobufMessage(Caver::Proto::GUIViewLayout *)
 *
 * Callees: 1
 *   0x00000000004D4994  Caver::GUIMargins::SaveToProtobufMessage(Caver::Proto::GUIMargins *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FAAB4 string=0x00000000004D4994 ""
 *   insn=0x00000000001FAAB8 string=0x00000000001FAABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIMargins::SaveToProtobufMessage(Caver::GUIMargins *this, Caver::Proto::GUIMargins *a2)
{
  return _ZNK5Caver10GUIMargins21SaveToProtobufMessageEPNS_5Proto10GUIMarginsE(this, a2);
}

