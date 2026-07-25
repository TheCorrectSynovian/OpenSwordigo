/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC930
 * Mangled: ._ZN5Caver5Proto13GUIViewLayout16default_instanceEv
 * Demangled: Caver::Proto::GUIViewLayout::default_instance(void)
 *
 * Callers: 2
 *   0x00000000002DB544  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *   0x00000000002DBA94  Caver::Proto::GameOptions::InitAsDefaultInstance(void)
 *
 * Callees: 1
 *   0x00000000002D6D98  Caver::Proto::GUIViewLayout::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC938 string=0x00000000001FC93C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::GUIViewLayout::default_instance(Caver::Proto::GUIViewLayout *this)
{
  return _ZN5Caver5Proto13GUIViewLayout16default_instanceEv(this);
}

