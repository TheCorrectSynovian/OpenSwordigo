/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027359C
 * Mangled: _ZN5Caver19HeroEntityComponent20HandleItemCollectionEPNS_11SceneObjectE
 * Demangled: Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *
 * Callers: 1
 *   0x00000000002014B0  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *
 * Callees: 28
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5A60  Caver::HeroEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F96C0  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *   0x00000000001FBFF0  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::operator[](std::string const&)
 *   0x00000000001FC620  Caver::HeroEntityComponent::TargetObject(boost::intrusive_ptr<Caver::SceneObject> const&,int)
 *   0x00000000001FCAD0  Caver::CollectableItemComponent::HandleCollection(void)
 *   0x00000000001FE7B0  Caver::GameEvent::SendEvent(Caver::GameEvent*)
 *   0x00000000001FEE40  Caver::Component::NewProgramStateForProgram(Caver::Program const&)
 *   0x00000000001FF240  Caver::EntityComponent::HandleMessage(int,void *)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000200B80  Caver::SceneObjectLib::PushSceneObject(Caver::ProgramState *,Caver::SceneObject *)
 *   0x0000000000201480  Caver::ProgramState::Execute(int)
 *   0x00000000002014B0  Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject *)
 *   0x0000000000201730  Caver::PortalComponent::Activate(void)
 *   0x0000000000203270  Caver::HeroEntityComponent::AddSafePosition(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021C13C  Caver::HealthComponent::Interface(void)
 *   0x00000000002314D0  Caver::PortalComponent::Interface(void)
 *   0x00000000002618B0  Caver::PhysicsObjectComponent::Interface(void)
 *   0x0000000000263D6C  Caver::CollectableItemComponent::className(void)
 *   0x0000000000271E54  Caver::ManaComponent::Interface(void)
 *   0x0000000000274FA8  Caver::MonsterEntityComponent::Interface(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 164
 *   insn=0x00000000002735B0 string=0x00000000002735B4 "W"
 *   insn=0x00000000002735C8 string=0x00000000002735CC "!"
 *   insn=0x00000000002735D8 string=0x00000000002735DC "S"
 *   insn=0x00000000002735DC string=0x00000000002735E0 "hr@"
 *   insn=0x00000000002735E0 string=0x00000000002735E4 ""
 *   insn=0x00000000002735E8 string=0x00000000002735EC "h"
 *   insn=0x00000000002735F0 string=0x00000000002735F8 "(y"
 *   insn=0x00000000002735F0 string=0x00000000005883D4 "0"
 *   insn=0x00000000002735F8 string=0x00000000002735FC ""
 *   insn=0x0000000000273608 string=0x000000000027360C "!(B"
 *   insn=0x000000000027360C string=0x000000000021C13C "@&"
 *   insn=0x0000000000273610 string=0x0000000000273614 " "
 *   insn=0x0000000000273614 string=0x0000000000273618 "\n"
 *   insn=0x0000000000273618 string=0x000000000027361C "iv@"
 *   insn=0x000000000027361C string=0x0000000000273620 ""
 *   insn=0x0000000000273620 string=0x0000000000273624 "("
 *   insn=0x0000000000273624 string=0x0000000000273628 "_"
 *   insn=0x0000000000273628 string=0x000000000027362C "H"
 *   insn=0x000000000027362C string=0x0000000000273630 "K"
 *   insn=0x0000000000273630 string=0x0000000000273634 "}"
 *   insn=0x0000000000273634 string=0x0000000000273638 ""
 *   insn=0x0000000000273638 string=0x000000000027363C "_"
 *   insn=0x0000000000273644 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000273658 string=0x000000000027365C "?"
 *   insn=0x0000000000273664 string=0x0000000000273668 "_"
 *   insn=0x0000000000273674 string=0x0000000000588455 "amount"
 *   insn=0x0000000000273680 string=0x0000000000273684 "M"
 *   insn=0x0000000000273684 string=0x0000000000273688 "xv@"
 *   insn=0x0000000000273690 string=0x0000000000273694 "W""
 *   insn=0x0000000000273694 string=0x00000000001FBFF0 "0'"
 *   insn=0x00000000002736A0 string=0x00000000002736A4 ")"
 *   insn=0x00000000002736B4 string=0x00000000002736B8 ")=G"
 *   insn=0x00000000002736B8 string=0x00000000002736BC "!"
 *   insn=0x00000000002736C0 string=0x00000000002736C4 "\t"
 *   insn=0x00000000002736C0 string=0x0000000000273910 "\t"
 *   insn=0x00000000002736C4 string=0x00000000002736C8 "*"
 *   insn=0x00000000002736C8 string=0x00000000002736CC "\n"
 *   insn=0x00000000002736D4 string=0x000000000027391C "?"
 *   insn=0x00000000002736DC string=0x00000000002736E0 "!XE"
 *   insn=0x00000000002736E8 string=0x00000000002736EC "\n N)iv@"
 *   insn=0x00000000002736EC string=0x00000000002736F0 "iv@"
 *   insn=0x00000000002736F0 string=0x00000000002736F4 "("
 *   insn=0x00000000002736F4 string=0x00000000002736F8 "_"
 *   insn=0x00000000002736F8 string=0x00000000002736FC "H"
 *   insn=0x00000000002736FC string=0x0000000000273700 "}"
 *   insn=0x0000000000273700 string=0x0000000000273704 "t"
 *   insn=0x0000000000273718 string=0x000000000027371C ""
 *   insn=0x000000000027371C string=0x0000000000273720 "?"
 *   insn=0x0000000000273724 string=0x0000000000273728 "\t"
 *   insn=0x0000000000273728 string=0x000000000027372C "_"
 *   insn=0x0000000000273730 string=0x0000000000273734 "\n"
 *   insn=0x0000000000273754 string=0x0000000000273758 "?"
 *   insn=0x0000000000273760 string=0x0000000000273764 "_"
 *   insn=0x0000000000273780 string=0x0000000000273784 "xv@"
 *   insn=0x000000000027379C string=0x00000000002737A0 ")"
 *   insn=0x00000000002737BC string=0x00000000002737C0 "a"
 *   insn=0x00000000002737BC string=0x00000000001FCAD0 "0'"
 *   insn=0x00000000002737C4 string=0x00000000002737C8 "X"
 *   insn=0x00000000002737D8 string=0x00000000002737DC ")"
 *   insn=0x0000000000273804 string=0x0000000000273808 " "
 *   insn=0x0000000000273814 string=0x0000000000273818 "a"
 *   insn=0x0000000000273830 string=0x0000000000273834 "h"
 *   insn=0x0000000000273834 string=0x0000000000273838 ""
 *   insn=0x0000000000273838 string=0x000000000027383C "h"
 *   insn=0x000000000027383C string=0x0000000000273840 "!"
 *   insn=0x0000000000273840 string=0x0000000000273844 "h"
 *   insn=0x0000000000273848 string=0x000000000027384C "\t@"
 *   insn=0x0000000000273850 string=0x0000000000273854 "h\n@"
 *   insn=0x0000000000273854 string=0x0000000000273858 ""
 *   insn=0x0000000000273858 string=0x000000000027385C "h\n"
 *   insn=0x000000000027385C string=0x0000000000273860 "!"
 *   insn=0x0000000000273860 string=0x0000000000273864 "h"
 *   insn=0x0000000000273868 string=0x000000000027386C "@"
 *   insn=0x0000000000273878 string=0x000000000027387C ")=G"
 *   insn=0x000000000027387C string=0x0000000000273880 "!"
 *   insn=0x0000000000273884 string=0x0000000000273888 "\t"
 *   insn=0x0000000000273884 string=0x000000000027389C "\t"
 *   insn=0x0000000000273888 string=0x000000000027388C "*"
 *   insn=0x000000000027388C string=0x0000000000273890 "\n"
 *   insn=0x0000000000273898 string=0x00000000002738A8 "?"
 *   insn=0x000000000027389C string=0x00000000002738A0 "*"
 *   insn=0x00000000002738A0 string=0x00000000002738A4 "\n"
 *   insn=0x00000000002738D0 string=0x0000000000273930 "h\n"
 *   insn=0x00000000002738EC string=0x00000000002738F0 ")=G"
 *   insn=0x00000000002738F0 string=0x00000000002738F4 "!"
 *   insn=0x00000000002738F8 string=0x00000000002738FC "\t"
 *   insn=0x00000000002738FC string=0x0000000000273900 "*"
 *   insn=0x0000000000273900 string=0x0000000000273904 "\n"
 *   insn=0x0000000000273910 string=0x0000000000273914 "*"
 *   insn=0x0000000000273914 string=0x0000000000273918 "\n"
 *   insn=0x0000000000273930 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000273938 string=0x000000000027393C "J"
 *   insn=0x0000000000273940 string=0x0000000000273944 "(a"
 *   insn=0x0000000000273950 string=0x0000000000273954 "J=G"
 *   insn=0x0000000000273954 string=0x0000000000273958 ")!"
 *   insn=0x000000000027395C string=0x0000000000273960 "*"
 *   insn=0x000000000027395C string=0x00000000002739CC "*"
 *   insn=0x0000000000273960 string=0x0000000000273964 "K"
 *   insn=0x0000000000273964 string=0x0000000000273968 "+"
 *   insn=0x0000000000273970 string=0x00000000002739B0 "_"
 *   insn=0x0000000000273978 string=0x000000000027397C "J"
 *   insn=0x0000000000273980 string=0x0000000000273984 "(a"
 *   insn=0x0000000000273990 string=0x0000000000273994 "J=G"
 *   insn=0x0000000000273994 string=0x0000000000273998 ")!"
 *   insn=0x000000000027399C string=0x00000000002739A0 "*"
 *   insn=0x00000000002739A0 string=0x00000000002739A4 "K"
 *   insn=0x00000000002739A4 string=0x00000000002739A8 "+"
 *   insn=0x00000000002739B0 string=0x00000000002739B4 "l"
 *   insn=0x00000000002739BC string=0x00000000002739C0 "y"
 *   insn=0x00000000002739CC string=0x00000000002739D0 "K"
 *   insn=0x00000000002739D0 string=0x00000000002739D4 "+"
 *   insn=0x00000000002739D4 string=0x00000000002739D8 "_"
 *   insn=0x00000000002739F8 string=0x00000000002739FC "4"
 *   insn=0x0000000000273A00 string=0x0000000000273A04 ""
 *   insn=0x0000000000273A10 string=0x0000000000273A14 "\t@"
 *   insn=0x0000000000273A20 string=0x0000000000273A24 ""
 *   insn=0x0000000000273A30 string=0x0000000000273A34 "@"
 *   insn=0x0000000000273A44 string=0x0000000000273A48 "Aj"
 *   insn=0x0000000000273A60 string=0x0000000000273A64 "X"
 *   insn=0x0000000000273A64 string=0x0000000000273A68 "\t"
 *   insn=0x0000000000273A80 string=0x0000000000273A84 ""
 *   insn=0x0000000000273A88 string=0x0000000000273A90 "(y"
 *   insn=0x0000000000273A90 string=0x0000000000273A94 ""
 *   insn=0x0000000000273A98 string=0x0000000000273A9C "`"
 *   insn=0x0000000000273AA0 string=0x0000000000273AA4 "`\n"
 *   insn=0x0000000000273AA8 string=0x0000000000273AAC "h"
 *   insn=0x0000000000273AB0 string=0x0000000000273AB4 "h2@"
 *   insn=0x0000000000273ABC string=0x0000000000273AC0 "wZ@"
 *   insn=0x0000000000273AC0 string=0x0000000000273AC4 "H\t"
 *   insn=0x0000000000273ADC string=0x0000000000273AE0 "!"
 *   insn=0x0000000000273AE8 string=0x0000000000273AEC "!tD"
 *   insn=0x0000000000273AF4 string=0x0000000000273AF8 "w"
 *   insn=0x0000000000273AFC string=0x0000000000273B00 "("
 *   insn=0x0000000000273B04 string=0x0000000000273B08 ""
 *   insn=0x0000000000273B14 string=0x0000000000273B18 ""
 *   insn=0x0000000000273B28 string=0x0000000000273B2C "@"
 *   insn=0x0000000000273B2C string=0x0000000000273B30 ""
 *   insn=0x0000000000273B30 string=0x0000000000273B34 ""
 *   insn=0x0000000000273B38 string=0x0000000000273B3C ""
 *   insn=0x0000000000273B3C string=0x0000000000273B40 ""
 *   insn=0x0000000000273B4C string=0x0000000000273B50 "E"
 *   insn=0x0000000000273B5C string=0x0000000000273B60 "A"
 *   insn=0x0000000000273B5C string=0x00000000001F5A60 "P'"
 *   insn=0x0000000000273B6C string=0x0000000000273B70 "!"
 *   insn=0x0000000000273B74 string=0x0000000000273B78 "`"
 *   insn=0x0000000000273B78 string=0x0000000000273B7C "b*@"
 *   insn=0x0000000000273B84 string=0x0000000000273B88 "7"
 *   insn=0x0000000000273B84 string=0x00000000001FC620 "0'"
 *   insn=0x0000000000273B94 string=0x0000000000273B98 "   "
 *   insn=0x0000000000273B98 string=0x0000000000273B9C "M"
 *   insn=0x0000000000273BA0 string=0x0000000000273BA4 "   "
 *   insn=0x0000000000273BAC string=0x0000000000273BB0 "  "
 *   insn=0x0000000000273BB8 string=0x0000000000273BBC "H"
 *   insn=0x0000000000273BC0 string=0x0000000000273BC4 ""
 *   insn=0x0000000000273BD8 string=0x0000000000273BDC "H"
 *   insn=0x0000000000273C08 string=0x00000000001F96C0 "0'"
 *   insn=0x0000000000273C0C string=0x0000000000273C10 ""
 *   insn=0x0000000000273C1C string=0x0000000000273C20 "!pG"
 *   insn=0x0000000000273C20 string=0x0000000000273C24 "o2"
 *   insn=0x0000000000273C28 string=0x0000000000273C2C ""
 *   insn=0x0000000000273C2C string=0x0000000000273C30 "H"
 *   insn=0x0000000000273C40 string=0x00000000005883D0 "\n"
 *   insn=0x0000000000273C6C string=0x0000000000273C70 "t-"
 *   insn=0x0000000000273C70 string=0x0000000000273C74 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HeroEntityComponent::HandleItemCollection(Caver::SceneObject **this, Caver::SceneObject *a2)
{
  __int64 v4; // x0
  __int64 v5; // x19
  __int64 v6; // x0
  int v7; // w8
  __int64 v8; // x22
  int v9; // w24
  Caver::GameEvent *v10; // x1
  _DWORD *v11; // x0
  char *v12; // x0
  unsigned int *v13; // x8
  int v14; // w9
  __int64 v15; // x0
  int v16; // w8
  Caver::GameEvent *v17; // x0
  int v18; // w24
  _DWORD *v19; // x0
  void *v20; // x0
  __int64 v21; // x22
  Caver::SceneObject *v22; // x2
  Caver::SceneObject *v23; // x2
  _QWORD *v24; // x19
  __int64 v25; // x8
  __int64 v26; // x8
  unsigned int *v27; // x8
  int v28; // w9
  Caver::SceneObjectLib *v29; // [xsp+70h] [xbp-60h] BYREF
  _QWORD *v30; // [xsp+78h] [xbp-58h]
  _QWORD v31[4]; // [xsp+80h] [xbp-50h] BYREF

  v31[3] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = Caver::SceneObject::ComponentWithInterface(a2, (__int64)Caver::CollectableItemComponent::Interface);
  v5 = v4;
  if ( v4 )
  {
    switch ( *(_DWORD *)(v4 + 112) )
    {
      case 1:
        v6 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::HealthComponent::Interface);
        if ( v6 )
        {
          v7 = *(_DWORD *)(v5 + 116) + *(_DWORD *)(v6 + 128);
          if ( *(_DWORD *)(v6 + 124) < v7 )
            v7 = *(_DWORD *)(v6 + 124);
          if ( !*(_BYTE *)(v6 + 120) )
            *(_DWORD *)(v6 + 128) = v7 & ~(v7 >> 31);
        }
        break;
      case 2:
        v15 = Caver::SceneObject::ComponentWithInterface(this[5], (__int64)Caver::ManaComponent::Interface);
        if ( v15 )
        {
          v16 = *(_DWORD *)(v5 + 116) + *(_DWORD *)(v15 + 116);
          if ( *(_DWORD *)(v15 + 112) < v16 )
            v16 = *(_DWORD *)(v15 + 112);
          *(_DWORD *)(v15 + 116) = v16 & ~(v16 >> 31);
          v17 = (Caver::GameEvent *)operator new(0x68u);
          *(_DWORD *)v17 = 6;
          *((_QWORD *)v17 + 2) = 0;
          *((_QWORD *)v17 + 3) = 0;
          *((_QWORD *)v17 + 4) = (char *)v17 + 16;
          *((_QWORD *)v17 + 5) = (char *)v17 + 16;
          *((_QWORD *)v17 + 6) = 0;
          *((_QWORD *)v17 + 8) = 0;
          *((_QWORD *)v17 + 9) = 0;
          *((_QWORD *)v17 + 10) = (char *)v17 + 64;
          *((_QWORD *)v17 + 11) = (char *)v17 + 64;
          *((_QWORD *)v17 + 12) = 0;
          goto LABEL_18;
        }
        break;
      case 4:
        v8 = operator new(0x68u);
        *(_DWORD *)v8 = 8;
        *(_QWORD *)(v8 + 16) = 0;
        *(_QWORD *)(v8 + 24) = 0;
        *(_QWORD *)(v8 + 32) = v8 + 16;
        *(_QWORD *)(v8 + 40) = v8 + 16;
        *(_QWORD *)(v8 + 48) = 0;
        *(_QWORD *)(v8 + 64) = 0;
        *(_QWORD *)(v8 + 72) = 0;
        *(_QWORD *)(v8 + 80) = v8 + 64;
        *(_QWORD *)(v8 + 88) = v8 + 64;
        *(_QWORD *)(v8 + 96) = 0;
        sub_566BB8((int)&v29, "amount");
        v9 = *(_DWORD *)(v5 + 116);
        std::map<std::string,int>::operator[]();
        *v11 = v9;
        v12 = (char *)v29 - 24;
        if ( (__int64 *)((char *)v29 - 24) == &qword_6FD2E0 )
          goto LABEL_17;
        v13 = (unsigned int *)((char *)v29 - 8);
        if ( !&pthread_create )
          goto LABEL_39;
        do
          v14 = __ldaxr(v13);
        while ( __stlxr(v14 - 1, v13) );
        goto LABEL_40;
      case 5:
        v8 = operator new(0x68u);
        *(_DWORD *)v8 = 7;
        *(_QWORD *)(v8 + 16) = 0;
        *(_QWORD *)(v8 + 24) = 0;
        *(_QWORD *)(v8 + 32) = v8 + 16;
        *(_QWORD *)(v8 + 40) = v8 + 16;
        *(_QWORD *)(v8 + 48) = 0;
        *(_QWORD *)(v8 + 64) = 0;
        *(_QWORD *)(v8 + 72) = 0;
        *(_QWORD *)(v8 + 80) = v8 + 64;
        *(_QWORD *)(v8 + 88) = v8 + 64;
        *(_QWORD *)(v8 + 96) = 0;
        sub_566BB8((int)&v29, "amount");
        v18 = *(_DWORD *)(v5 + 116);
        std::map<std::string,int>::operator[]();
        *v19 = v18;
        v12 = (char *)v29 - 24;
        if ( (__int64 *)((char *)v29 - 24) != &qword_6FD2E0 )
        {
          v13 = (unsigned int *)((char *)v29 - 8);
          if ( &pthread_create )
          {
            do
              v14 = __ldaxr(v13);
            while ( __stlxr(v14 - 1, v13) );
          }
          else
          {
LABEL_39:
            v14 = (*v13)--;
          }
LABEL_40:
          if ( v14 <= 0 )
            operator delete(v12);
        }
LABEL_17:
        v17 = (Caver::GameEvent *)v8;
LABEL_18:
        Caver::GameEvent::SendEvent(v17, v10);
        break;
      default:
        break;
    }
    Caver::CollectableItemComponent::HandleCollection((Caver::CollectableItemComponent *)v5);
    sub_56A528(v31, v5 + 120);
    v20 = (void *)(v31[0] - 24LL);
    v21 = *(_QWORD *)(v31[0] - 24LL);
    if ( (__int64 *)(v31[0] - 24LL) == &qword_6FD2E0 )
      goto LABEL_20;
    v27 = (unsigned int *)(v31[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v28 = __ldaxr(v27);
      while ( __stlxr(v28 - 1, v27) );
    }
    else
    {
      v28 = (*v27)--;
    }
    if ( v28 > 0 )
    {
LABEL_20:
      if ( !v21 )
      {
LABEL_34:
        *((_BYTE *)a2 + 232) = 1;
        return;
      }
    }
    else
    {
      operator delete(v20);
      if ( !v21 )
        goto LABEL_34;
    }
    if ( this[45] )
    {
      Caver::Component::NewProgramStateForProgram(
        (__int64 *)&v29,
        (Caver::Component *)this,
        (const Caver::Program *)(this + 42));
      if ( v29 )
      {
        Caver::SceneObjectLib::PushSceneObject(v29, this[5], v22);
        Caver::SceneObjectLib::PushSceneObject(v29, *(Caver::ProgramState **)(v5 + 40), v23);
        Caver::ProgramState::Execute(v29, 2);
      }
      v24 = v30;
      if ( v30 )
      {
        v25 = v30[1] - 1LL;
        v30[1] = v25;
        if ( !v25 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v24 + 16LL))(v24);
          v26 = v24[2] - 1LL;
          v24[2] = v26;
          if ( !v26 )
            (*(void (__fastcall **)(_QWORD *))(*v24 + 24LL))(v24);
        }
      }
    }
  }
}

