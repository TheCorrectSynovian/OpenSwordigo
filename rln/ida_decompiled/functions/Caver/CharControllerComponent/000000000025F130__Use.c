/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025F130
 * Mangled: _ZN5Caver23CharControllerComponent3UseEv
 * Demangled: Caver::CharControllerComponent::Use(void)
 *
 * Callers: 1
 *   0x0000000000202E60  Caver::CharControllerComponent::Use(void)
 *
 * Callees: 1
 *   0x00000000001FE5E0  Caver::SceneObject::HandleMessage(int,void *)
 *
 * Referenced strings: 1
 *   insn=0x000000000025F13C string=0x000000000025F140 "(}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CharControllerComponent::Use(Caver::CharControllerComponent *this)
{
  Caver::SceneObject *v1; // x0

  v1 = (Caver::SceneObject *)*((_QWORD *)this + 83);
  if ( v1 )
    Caver::SceneObject::HandleMessage(v1, 20, 0);
}

