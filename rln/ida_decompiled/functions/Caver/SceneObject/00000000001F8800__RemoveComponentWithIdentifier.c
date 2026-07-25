/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8800
 * Mangled: ._ZN5Caver11SceneObject29RemoveComponentWithIdentifierEi
 * Demangled: Caver::SceneObject::RemoveComponentWithIdentifier(int)
 *
 * Callers: 1
 *   0x000000000023D4BC  Caver::TextBubbleComponent::SetHandleTouches(bool)
 *
 * Callees: 1
 *   0x000000000047417C  Caver::SceneObject::RemoveComponentWithIdentifier(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8808 string=0x00000000001F880C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::RemoveComponentWithIdentifier(Caver::SceneObject *this, int a2)
{
  return _ZN5Caver11SceneObject29RemoveComponentWithIdentifierEi(this, a2);
}

