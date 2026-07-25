/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000242218
 * Mangled: _ZN5Caver9Component18UpdateObjectBoundsEv
 * Demangled: Caver::Component::UpdateObjectBounds(void)
 *
 * Callers: 1
 *   0x00000000001F73A0  Caver::Component::UpdateObjectBounds(void)
 *
 * Callees: 1
 *   0x00000000001F9FB0  Caver::SceneObject::UpdateBounds(void)
 *
 * Referenced strings: 3
 *   insn=0x0000000000242218 string=0x000000000024221C "@"
 *   insn=0x000000000024221C string=0x0000000000242220 "d"
 *   insn=0x0000000000242220 string=0x00000000001F9FB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::SceneObject *__fastcall Caver::Component::UpdateObjectBounds(Caver::Component *this)
{
  Caver::SceneObject *result; // x0

  result = (Caver::SceneObject *)*((_QWORD *)this + 5);
  if ( result )
    return (Caver::SceneObject *)Caver::SceneObject::UpdateBounds(result);
  return result;
}

