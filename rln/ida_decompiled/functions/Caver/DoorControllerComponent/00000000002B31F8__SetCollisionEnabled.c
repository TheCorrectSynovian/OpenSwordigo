/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B31F8
 * Mangled: _ZN5Caver23DoorControllerComponent19SetCollisionEnabledEb
 * Demangled: Caver::DoorControllerComponent::SetCollisionEnabled(bool)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FD0F0  Caver::CollisionShapeComponent::SetEnabled(bool)
 *   0x0000000000215A90  Caver::CollisionShapeComponent::Interface(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002B3204 string=0x00000000002B3208 ""
 *   insn=0x00000000002B3218 string=0x00000000002B321C "s"
 *   insn=0x00000000002B321C string=0x00000000002B3220 "4"
 *   insn=0x00000000002B3228 string=0x00000000002B322C ""
 *   insn=0x00000000002B322C string=0x00000000002B3230 "Q@"
 *   insn=0x00000000002B3244 string=0x00000000001FD0F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DoorControllerComponent::SetCollisionEnabled(Caver::DoorControllerComponent *this)
{
  __int64 v1; // x8
  Caver::CollisionShapeComponent **v2; // x21
  Caver::CollisionShapeComponent **i; // x22

  v1 = *((_QWORD *)this + 5);
  v2 = *(Caver::CollisionShapeComponent ***)(v1 + 192);
  for ( i = *(Caver::CollisionShapeComponent ***)(v1 + 200); i != v2; ++v2 )
  {
    if ( ((*(__int64 (__fastcall **)(Caver::CollisionShapeComponent *, __int64 (__fastcall *(__fastcall *)(Caver::CollisionShapeComponent *))(Caver::CollisionShapeComponent *__hidden)))(*(_QWORD *)*v2 + 160LL))(
            *v2,
            Caver::CollisionShapeComponent::Interface)
        & 1) != 0 )
      Caver::CollisionShapeComponent::SetEnabled(*v2);
  }
}

