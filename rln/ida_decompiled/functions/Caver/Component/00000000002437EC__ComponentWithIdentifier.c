/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002437EC
 * Mangled: _ZNK5Caver9Component23ComponentWithIdentifierEi
 * Demangled: Caver::Component::ComponentWithIdentifier(int)
 *
 * Callers: 1
 *   0x00000000001FAAC0  Caver::Component::ComponentWithIdentifier(int)
 *
 * Callees: 1
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *
 * Referenced strings: 3
 *   insn=0x00000000002437EC string=0x00000000002437F0 "@"
 *   insn=0x00000000002437F0 string=0x00000000002437F4 "K"
 *   insn=0x00000000002437F4 string=0x00000000001F8520 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Component::ComponentWithIdentifier(Caver::Component *this)
{
  Caver::SceneObject *v1; // x0

  v1 = (Caver::SceneObject *)*((_QWORD *)this + 5);
  if ( v1 )
    Caver::SceneObject::ComponentWithIdentifier(v1);
}

