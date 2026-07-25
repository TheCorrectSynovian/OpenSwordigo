/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3D70
 * Mangled: ._ZN5Caver5Proto3Box16default_instanceEv
 * Demangled: Caver::Proto::Box::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002FAF5C  Caver::Proto::Mesh::InitAsDefaultInstance(void)
 *
 * Callees: 1
 *   0x00000000002CF4B4  Caver::Proto::Box::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3D78 string=0x00000000001F3D7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Box::default_instance(Caver::Proto::Box *this)
{
  return _ZN5Caver5Proto3Box16default_instanceEv(this);
}

