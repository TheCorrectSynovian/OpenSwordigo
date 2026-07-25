/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022AE98
 * Mangled: _ZN5Caver29ObjectLinkControllerComponent10LinkToBoneERKN5boost13intrusive_ptrINS_11SceneObjectEEERKSs
 * Demangled: Caver::ObjectLinkControllerComponent::LinkToBone(boost::intrusive_ptr<Caver::SceneObject> const&,std::string const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000002012F0  Caver::ObjectLinkControllerComponent::LinkToObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 1
 *   insn=0x000000000022AEC4 string=0x000000000022AEC8 "\nY"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectLinkControllerComponent::LinkToBone(__int64 a1)
{
  sub_56A6A8(a1 + 144);
  Caver::ObjectLinkControllerComponent::LinkToObject();
}

