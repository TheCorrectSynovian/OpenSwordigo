/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC970
 * Mangled: ._ZN5Caver5Proto7Texture16default_instanceEv
 * Demangled: Caver::Proto::Texture::default_instance(void)
 *
 * Callers: 2
 *   0x00000000002F6790  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *   0x00000000002FAF20  Caver::Proto::MeshMaterial::InitAsDefaultInstance(void)
 *
 * Callees: 1
 *   0x00000000002D2B2C  Caver::Proto::Texture::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC978 string=0x00000000001FC97C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Texture::default_instance(Caver::Proto::Texture *this)
{
  return _ZN5Caver5Proto7Texture16default_instanceEv(this);
}

