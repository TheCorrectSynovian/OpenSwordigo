/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000213DCC
 * Mangled: _ZN5Caver37BoneControlledCollisionShapeComponent17InitWithComponentEPKS0_
 * Demangled: Caver::BoneControlledCollisionShapeComponent::InitWithComponent(Caver::BoneControlledCollisionShapeComponent const*)
 *
 * Callers: 1
 *   0x000000000021394C  Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *
 * Callees: 2
 *   0x00000000001FA760  Caver::CollisionShapeComponent::InitWithComponent(Caver::CollisionShapeComponent const*)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 12
 *   insn=0x0000000000213DDC string=0x0000000000213DE0 "`"
 *   insn=0x0000000000213DE0 string=0x00000000001FA760 "0'"
 *   insn=0x0000000000213DE4 string=0x0000000000213DE8 "i"
 *   insn=0x0000000000213DE8 string=0x0000000000213DEC "?"
 *   insn=0x0000000000213DF0 string=0x0000000000213DF4 "`"
 *   insn=0x0000000000213DF4 string=0x0000000000213DF8 "h"
 *   insn=0x0000000000213E00 string=0x0000000000213E04 "@"
 *   insn=0x0000000000213E04 string=0x0000000000213E08 ""
 *   insn=0x0000000000213E08 string=0x0000000000213E0C ""
 *   insn=0x0000000000213E10 string=0x0000000000213E14 ""
 *   insn=0x0000000000213E14 string=0x0000000000213E18 ""
 *   insn=0x0000000000213E24 string=0x0000000000213E28 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BoneControlledCollisionShapeComponent::InitWithComponent(
        Caver::BoneControlledCollisionShapeComponent *this,
        const Caver::BoneControlledCollisionShapeComponent *a2)
{
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8

  Caver::CollisionShapeComponent::InitWithComponent(this, a2);
  v4 = *((_DWORD *)a2 + 118);
  if ( *((_DWORD *)this + 118) != v4 )
  {
    v5 = (_DWORD *)*((_QWORD *)this + 60);
    *((_DWORD *)this + 118) = v4;
    *((_QWORD *)this + 60) = 0;
    if ( v5 )
    {
      v6 = v5[2] - 1;
      v5[2] = v6;
      if ( !v6 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return sub_56A6A8((char *)this + 488, (char *)a2 + 488);
}

