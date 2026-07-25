/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFFE0
 * Mangled: ._ZN5Caver10GUIMargins23LoadFromProtobufMessageERKNS_5Proto10GUIMarginsE
 * Demangled: Caver::GUIMargins::LoadFromProtobufMessage(Caver::Proto::GUIMargins const&)
 *
 * Callers: 1
 *   0x00000000004A7C04  Caver::GUIViewLayout::LoadFromProtobufMessage(Caver::Proto::GUIViewLayout const&)
 *
 * Callees: 1
 *   0x00000000004D4910  Caver::GUIMargins::LoadFromProtobufMessage(Caver::Proto::GUIMargins const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FFFE4 string=0x00000000004D4910 "("
 *   insn=0x00000000001FFFE8 string=0x00000000001FFFEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIMargins::LoadFromProtobufMessage(
        Caver::GUIMargins *this,
        const Caver::Proto::GUIMargins *a2)
{
  return _ZN5Caver10GUIMargins23LoadFromProtobufMessageERKNS_5Proto10GUIMarginsE(this, a2);
}

