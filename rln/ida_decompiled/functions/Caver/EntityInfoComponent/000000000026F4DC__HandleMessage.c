/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F4DC
 * Mangled: _ZN5Caver19EntityInfoComponent13HandleMessageEiPv
 * Demangled: Caver::EntityInfoComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FD500  Caver::EntityInfoComponent::ApplyToObject(Caver::SceneObject *)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026F808  Caver::EntityInfoComponent::className(void)
 *
 * Referenced strings: 6
 *   insn=0x000000000026F4E8 string=0x000000000026F4EC "?"
 *   insn=0x000000000026F4F0 string=0x000000000026F4F4 "a"
 *   insn=0x000000000026F4F8 string=0x000000000026F4FC "("
 *   insn=0x000000000026F500 string=0x000000000026F504 "!"
 *   insn=0x000000000026F508 string=0x000000000026F50C "5D"
 *   insn=0x000000000026F51C string=0x00000000001FD500 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityInfoComponent::HandleMessage(
        Caver::EntityInfoComponent *this,
        int a2,
        Caver::SceneObject *a3)
{
  if ( a2 == 3
    && *((_BYTE *)this + 112)
    && !Caver::SceneObject::ComponentWithInterface(a3, (__int64)Caver::EntityInfoComponent::Interface) )
  {
    Caver::EntityInfoComponent::ApplyToObject(this, a3);
  }
  return 0;
}

