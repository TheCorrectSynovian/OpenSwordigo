/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9FB0
 * Mangled: ._ZN5Caver11SceneObject12UpdateBoundsEv
 * Demangled: Caver::SceneObject::UpdateBounds(void)
 *
 * Callers: 4
 *   0x0000000000242218  Caver::Component::UpdateObjectBounds(void)
 *   0x000000000046FE44  Caver::SceneObject::Templatize(std::string const&)
 *   0x0000000000473FB0  Caver::SceneObject::AddComponent(boost::intrusive_ptr<Caver::Component> const&)
 *   0x000000000047417C  Caver::SceneObject::RemoveComponentWithIdentifier(int)
 *
 * Callees: 1
 *   0x00000000004737D8  Caver::SceneObject::UpdateBounds(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9FB8 string=0x00000000001F9FBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::UpdateBounds(Caver::SceneObject *this)
{
  return _ZN5Caver11SceneObject12UpdateBoundsEv(this);
}

