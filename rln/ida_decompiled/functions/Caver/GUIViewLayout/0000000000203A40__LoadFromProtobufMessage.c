/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203A40
 * Mangled: ._ZN5Caver13GUIViewLayout23LoadFromProtobufMessageERKNS_5Proto13GUIViewLayoutE
 * Demangled: Caver::GUIViewLayout::LoadFromProtobufMessage(Caver::Proto::GUIViewLayout const&)
 *
 * Callers: 1
 *   0x00000000003B45E8  Caver::GameOptions::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004A7C04  Caver::GUIViewLayout::LoadFromProtobufMessage(Caver::Proto::GUIViewLayout const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203A48 string=0x0000000000203A4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIViewLayout::LoadFromProtobufMessage(
        Caver::GUIViewLayout *this,
        const Caver::Proto::GUIViewLayout *a2)
{
  return _ZN5Caver13GUIViewLayout23LoadFromProtobufMessageERKNS_5Proto13GUIViewLayoutE(this, a2);
}

