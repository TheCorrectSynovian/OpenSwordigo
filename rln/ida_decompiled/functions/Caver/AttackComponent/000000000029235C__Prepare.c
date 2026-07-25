/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029235C
 * Mangled: _ZN5Caver15AttackComponent7PrepareEv
 * Demangled: Caver::AttackComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FD0F0  Caver::CollisionShapeComponent::SetEnabled(bool)
 *   0x0000000000203040  Caver::AnimBlendNode::AnimBlendNode(void)
 *   0x0000000000292408  Caver::AttackComponent::WorldPointInsideAttackArea(Caver::Vector2 const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x0000000000292370 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000292374 string=0x0000000000292378 "2"
 *   insn=0x000000000029237C string=0x0000000000292380 ""
 *   insn=0x0000000000292384 string=0x0000000000292388 "`~@"
 *   insn=0x0000000000292388 string=0x000000000029238C "t~"
 *   insn=0x000000000029238C string=0x0000000000292390 " "
 *   insn=0x0000000000292390 string=0x0000000000292394 "@"
 *   insn=0x0000000000292390 string=0x00000000002923B4 "h"
 *   insn=0x0000000000292394 string=0x0000000000292398 ""
 *   insn=0x0000000000292398 string=0x000000000029239C ""
 *   insn=0x00000000002923A0 string=0x00000000002923A4 ""
 *   insn=0x00000000002923A4 string=0x00000000002923A8 ""
 *   insn=0x00000000002923AC string=0x00000000002923B0 "t~@"
 *   insn=0x00000000002923B8 string=0x00000000002923BC "`N@"
 *   insn=0x00000000002923C0 string=0x00000000002923C4 "`""
 *   insn=0x00000000002923CC string=0x00000000002923D0 "`N@"
 *   insn=0x00000000002923CC string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002923E0 string=0x00000000002923E4 "C"
 *   insn=0x00000000002923E4 string=0x00000000001FD0F0 "0'"
 *   insn=0x00000000002923FC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000292400 string=0x0000000000292404 "0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AttackComponent::Prepare(Caver::AttackComponent *this)
{
  __int64 v2; // x20
  _DWORD *v3; // x0
  int v4; // w8
  Caver::CollisionShapeComponent *v5; // x0

  v2 = operator new(0x30u);
  Caver::AnimBlendNode::AnimBlendNode((Caver::AnimBlendNode *)v2);
  ++*(_DWORD *)(v2 + 8);
  v3 = (_DWORD *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 31) = v2;
  if ( v3 )
  {
    v4 = v3[2] - 1;
    v3[2] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 8LL))(v3);
      v2 = *((_QWORD *)this + 31);
    }
  }
  *(_QWORD *)(v2 + 36) = *((_QWORD *)this + 37);
  v5 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 19);
  if ( v5
    || (Caver::ComponentOutletBase::Connect((Caver::AttackComponent *)((char *)this + 136), this),
        (v5 = (Caver::CollisionShapeComponent *)*((_QWORD *)this + 19)) != 0) )
  {
    Caver::CollisionShapeComponent::SetEnabled(v5);
  }
}

