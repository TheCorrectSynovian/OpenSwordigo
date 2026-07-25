/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000215380
 * Mangled: _ZNK5Caver37BoneControlledCollisionShapeComponent5CloneEv
 * Demangled: Caver::BoneControlledCollisionShapeComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000215138  Caver::BoneControlledCollisionShapeComponent::~BoneControlledCollisionShapeComponent()
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA760  Caver::CollisionShapeComponent::InitWithComponent(Caver::CollisionShapeComponent const*)
 *   0x00000000001FD580  Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent(void)
 *   0x0000000000215418  Caver::Component::InitWithComponent(Caver::Component const*)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 17
 *   insn=0x0000000000215394 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000215398 string=0x000000000021539C "y"
 *   insn=0x000000000021539C string=0x00000000001FD580 "0'"
 *   insn=0x00000000002153A8 string=0x00000000001FA760 "0'"
 *   insn=0x00000000002153AC string=0x00000000002153B0 "i"
 *   insn=0x00000000002153B0 string=0x00000000002153B4 "?"
 *   insn=0x00000000002153B8 string=0x00000000002153BC "`"
 *   insn=0x00000000002153BC string=0x00000000002153C0 "h"
 *   insn=0x00000000002153C8 string=0x00000000002153CC "@"
 *   insn=0x00000000002153CC string=0x00000000002153D0 ""
 *   insn=0x00000000002153D0 string=0x00000000002153D4 ""
 *   insn=0x00000000002153D8 string=0x00000000002153DC ""
 *   insn=0x00000000002153DC string=0x00000000002153E0 ""
 *   insn=0x00000000002153E8 string=0x00000000002153EC "`"
 *   insn=0x000000000021540C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000215410 string=0x0000000000215414 ","
 *   insn=0x0000000000215414 string=0x0000000000215418 ") @"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BoneControlledCollisionShapeComponent::Clone(
        Caver::BoneControlledCollisionShapeComponent *this)
{
  __int64 v2; // x19
  int v3; // w8
  _DWORD *v4; // x0
  int v5; // w8

  v2 = operator new(0x200u);
  Caver::BoneControlledCollisionShapeComponent::BoneControlledCollisionShapeComponent((Caver::BoneControlledCollisionShapeComponent *)v2);
  Caver::CollisionShapeComponent::InitWithComponent((Caver::CollisionShapeComponent *)v2, this);
  v3 = *((_DWORD *)this + 118);
  if ( *(_DWORD *)(v2 + 472) != v3 )
  {
    v4 = *(_DWORD **)(v2 + 480);
    *(_DWORD *)(v2 + 472) = v3;
    *(_QWORD *)(v2 + 480) = 0;
    if ( v4 )
    {
      v5 = v4[2] - 1;
      v4[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  sub_56A6A8(v2 + 488, (char *)this + 488);
  return v2;
}

