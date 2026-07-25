/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029E624
 * Mangled: _ZN5Caver32SkellyMonsterControllerComponent13HandleMessageEiPv
 * Demangled: Caver::SkellyMonsterControllerComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F6190  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FC090  Caver::CharControllerComponent::StopMovingToDirection(int)
 *   0x00000000001FDFE0  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *
 * Referenced strings: 32
 *   insn=0x000000000029E62C string=0x000000000029E630 "?"
 *   insn=0x000000000029E634 string=0x000000000029E638 "`"
 *   insn=0x000000000029E638 string=0x000000000029E63C "?"
 *   insn=0x000000000029E638 string=0x000000000029E684 "`r@"
 *   insn=0x000000000029E640 string=0x000000000029E644 "?"
 *   insn=0x000000000029E640 string=0x000000000029E6D4 "h"
 *   insn=0x000000000029E644 string=0x000000000029E648 "!"
 *   insn=0x000000000029E648 string=0x000000000029E64C "h"
 *   insn=0x000000000029E650 string=0x000000000029E654 "a"
 *   insn=0x000000000029E658 string=0x000000000029E65C "`"
 *   insn=0x000000000029E658 string=0x000000000029E668 "a"
 *   insn=0x000000000029E660 string=0x000000000029E664 "_~"
 *   insn=0x000000000029E664 string=0x00000000001FDFE0 "0'"
 *   insn=0x000000000029E66C string=0x000000000029E670 "`"
 *   insn=0x000000000029E674 string=0x000000000029E678 "Z~"
 *   insn=0x000000000029E67C string=0x000000000029E680 "#"
 *   insn=0x000000000029E68C string=0x000000000029E690 "tB"
 *   insn=0x000000000029E69C string=0x000000000029E6A0 "`r@"
 *   insn=0x000000000029E69C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029E6B0 string=0x000000000029E6B4 "e"
 *   insn=0x000000000029E6B4 string=0x000000000029E6B8 "hr@"
 *   insn=0x000000000029E6C0 string=0x000000000029E6C4 "sv"
 *   insn=0x000000000029E6C4 string=0x00000000001FC090 "0'"
 *   insn=0x000000000029E6C8 string=0x000000000029E6CC "hB"
 *   insn=0x000000000029E6D8 string=0x000000000029E6DC "h"
 *   insn=0x000000000029E6E0 string=0x000000000029E6E4 "`"
 *   insn=0x000000000029E6E0 string=0x000000000029E6F0 "h"
 *   insn=0x000000000029E6E4 string=0x000000000029E6E8 "a""
 *   insn=0x000000000029E6EC string=0x00000000001F6190 "0'"
 *   insn=0x000000000029E6F4 string=0x000000000029E6F8 "`"
 *   insn=0x000000000029E6F8 string=0x000000000029E6FC "a"
 *   insn=0x000000000029E704 string=0x000000000029E708 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkellyMonsterControllerComponent::HandleMessage(
        Caver::SkellyMonsterControllerComponent *this,
        int a2,
        void *a3)
{
  Caver::SceneObject *v4; // x1
  Caver::SceneObject *v5; // x1
  Caver::CharControllerComponent *v6; // x0
  Caver::CharControllerComponent *v7; // x8

  if ( a2 == 6 )
  {
    v6 = (Caver::CharControllerComponent *)*((_QWORD *)this + 28);
    v7 = v6;
    if ( !v6 )
    {
      Caver::ComponentOutletBase::Connect((Caver::SkellyMonsterControllerComponent *)((char *)this + 208), this);
      v6 = (Caver::CharControllerComponent *)*((_QWORD *)this + 28);
      v7 = v6;
      if ( !v6 )
      {
        Caver::ComponentOutletBase::Connect((Caver::SkellyMonsterControllerComponent *)((char *)this + 208), this);
        v7 = (Caver::CharControllerComponent *)*((_QWORD *)this + 28);
        v6 = 0;
      }
    }
    Caver::CharControllerComponent::StopMovingToDirection(v6, *((_DWORD *)v7 + 140));
    *((_BYTE *)this + 272) = 1;
  }
  else if ( a2 == 5 )
  {
    if ( !*((_BYTE *)this + 292) )
    {
      if ( *((_QWORD *)this + 33) )
        Caver::SceneObject::AddChildObject();
      if ( *((_QWORD *)this + 32) )
        Caver::SceneObject::AddChildObject();
      *((_BYTE *)this + 292) = 1;
    }
  }
  else if ( a2 == 2 && *((_BYTE *)this + 292) )
  {
    v4 = (Caver::SceneObject *)*((_QWORD *)this + 33);
    if ( v4 )
      Caver::SceneObject::RemoveChildObject(*((Caver::SceneObject **)this + 5), v4, 1);
    v5 = (Caver::SceneObject *)*((_QWORD *)this + 32);
    if ( v5 )
      Caver::SceneObject::RemoveChildObject(*((Caver::SceneObject **)this + 5), v5, 1);
    *((_BYTE *)this + 292) = 0;
  }
  return 0;
}

