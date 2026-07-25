/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF680
 * Mangled: ._ZNK5Caver5Proto16SceneObjectGroup8ByteSizeEv
 * Demangled: Caver::Proto::SceneObjectGroup::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000003023A4  Caver::Proto::Scene::ByteSize(void)
 *
 * Callees: 1
 *   0x0000000000300F78  Caver::Proto::SceneObjectGroup::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF688 string=0x00000000001FF68C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SceneObjectGroup::ByteSize(Caver::Proto::SceneObjectGroup *this)
{
  return _ZNK5Caver5Proto16SceneObjectGroup8ByteSizeEv(this);
}

