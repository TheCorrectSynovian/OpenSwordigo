/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034D490
 * Mangled: _ZN5Caver19GameSceneController26RegisterTreasureCollectionERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::GameSceneController::RegisterTreasureCollection(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x00000000001F9BD0  Caver::GameSceneController::RegisterTreasureCollection(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7180  Caver::StateProperties::HasFlag(std::string const&)
 *   0x00000000001F71F0  Caver::StateProperties::AddFlag(std::string const&)
 *   0x00000000001FE7B0  Caver::GameEvent::SendEvent(Caver::GameEvent*)
 *   0x0000000000202BC0  Caver::GameEvent::NewCounterEvent(std::string const&,int)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 65
 *   insn=0x000000000034D49C string=0x000000000034D4A0 "T"
 *   insn=0x000000000034D4AC string=0x000000000058EB5B "chest_"
 *   insn=0x000000000034D4B4 string=0x000000000034D4B8 "("
 *   insn=0x000000000034D4C4 string=0x000000000034D4C8 "h"
 *   insn=0x000000000034D4D0 string=0x000000000034D4D4 "+"
 *   insn=0x000000000034D4D4 string=0x00000000001F7180 "0'"
 *   insn=0x000000000034D4D8 string=0x000000000034D4DC "h"
 *   insn=0x000000000034D4DC string=0x000000000034D4E0 "\tE@"
 *   insn=0x000000000034D4E4 string=0x000000000034D4E8 ")"
 *   insn=0x000000000034D4E8 string=0x000000000034D4EC "\tE"
 *   insn=0x000000000034D4F0 string=0x000000000034D4F4 "?"
 *   insn=0x000000000034D4F4 string=0x00000000001F71F0 "0'"
 *   insn=0x000000000034D4F8 string=0x000000000058EB62 "treasures"
 *   insn=0x000000000034D520 string=0x000000000034D524 ")"
 *   insn=0x000000000034D538 string=0x000000000034D53C ")"
 *   insn=0x000000000034D544 string=0x000000000034D548 "!"
 *   insn=0x000000000034D558 string=0x000000000034D5F4 "7"
 *   insn=0x000000000034D56C string=0x000000000034D570 ")=G"
 *   insn=0x000000000034D570 string=0x000000000034D574 "!"
 *   insn=0x000000000034D578 string=0x000000000034D57C "\t"
 *   insn=0x000000000034D578 string=0x000000000034D590 "\t"
 *   insn=0x000000000034D57C string=0x000000000034D580 "*"
 *   insn=0x000000000034D580 string=0x000000000034D584 "\n"
 *   insn=0x000000000034D58C string=0x000000000034D59C "?"
 *   insn=0x000000000034D590 string=0x000000000034D594 "*"
 *   insn=0x000000000034D594 string=0x000000000034D598 "\n"
 *   insn=0x000000000034D59C string=0x000000000034D5A0 "l"
 *   insn=0x000000000034D5B0 string=0x000000000034D5B4 ")=G"
 *   insn=0x000000000034D5B4 string=0x000000000034D5B8 "!"
 *   insn=0x000000000034D5BC string=0x000000000034D5C0 "\t"
 *   insn=0x000000000034D5BC string=0x000000000034D5D4 "\t"
 *   insn=0x000000000034D5C0 string=0x000000000034D5C4 "*"
 *   insn=0x000000000034D5C4 string=0x000000000034D5C8 "\n"
 *   insn=0x000000000034D5D0 string=0x000000000034D5E0 "?"
 *   insn=0x000000000034D5D4 string=0x000000000034D5D8 "*"
 *   insn=0x000000000034D5D8 string=0x000000000034D5DC "\n"
 *   insn=0x000000000034D5E8 string=0x000000000034D5EC "ns"
 *   insn=0x000000000034D5F4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000034D600 string=0x000000000034D604 "J"
 *   insn=0x000000000034D608 string=0x000000000034D60C "(a"
 *   insn=0x000000000034D618 string=0x000000000034D61C "J=G"
 *   insn=0x000000000034D61C string=0x000000000034D620 ")!"
 *   insn=0x000000000034D624 string=0x000000000034D628 "*"
 *   insn=0x000000000034D624 string=0x000000000034D63C "*"
 *   insn=0x000000000034D628 string=0x000000000034D62C "K"
 *   insn=0x000000000034D62C string=0x000000000034D630 "+"
 *   insn=0x000000000034D638 string=0x000000000034D648 "_"
 *   insn=0x000000000034D63C string=0x000000000034D640 "K"
 *   insn=0x000000000034D640 string=0x000000000034D644 "+"
 *   insn=0x000000000034D654 string=0x000000000034D658 "Ss"
 *   insn=0x000000000034D668 string=0x000000000034D66C ")"
 *   insn=0x000000000034D67C string=0x000000000034D680 ")=G"
 *   insn=0x000000000034D680 string=0x000000000034D684 "!"
 *   insn=0x000000000034D684 string=0x000000000034D688 "i"
 *   insn=0x000000000034D688 string=0x000000000034D68C "\t"
 *   insn=0x000000000034D688 string=0x000000000034D6B4 "\t"
 *   insn=0x000000000034D68C string=0x000000000034D690 "*"
 *   insn=0x000000000034D690 string=0x000000000034D694 "\n"
 *   insn=0x000000000034D698 string=0x000000000034D69C "?"
 *   insn=0x000000000034D69C string=0x000000000034D6A0 "l"
 *   insn=0x000000000034D6A4 string=0x000000000034D6A8 "?s"
 *   insn=0x000000000034D6B4 string=0x000000000034D6B8 "*"
 *   insn=0x000000000034D6B8 string=0x000000000034D6BC "\n"
 *   insn=0x000000000034D6BC string=0x000000000034D6C0 "?"
 *   insn=0x000000000034D6C0 string=0x000000000034D6C4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameSceneController::RegisterTreasureCollection(__int64 a1, _QWORD *a2)
{
  Caver::GameEvent *v3; // x0
  Caver::GameEvent *v4; // x1
  void *v5; // x0
  void *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9
  unsigned int *v9; // x8
  int v10; // w9
  __int64 v11; // [xsp+10h] [xbp-30h] BYREF
  _QWORD v12[3]; // [xsp+18h] [xbp-28h] BYREF

  v12[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  ((void (__fastcall *)(_QWORD *__return_ptr, const char *, __int64))loc_25A030)(v12, "chest_", *a2 + 80LL);
  if ( (Caver::StateProperties::HasFlag() & 1) == 0 )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 68LL);
    Caver::StateProperties::AddFlag();
    sub_566BB8((int)&v11, "treasures");
    v3 = (Caver::GameEvent *)Caver::GameEvent::NewCounterEvent();
    Caver::GameEvent::SendEvent(v3, v4);
    v5 = (void *)(v11 - 24);
    if ( (__int64 *)(v11 - 24) != &qword_6FD2E0 )
    {
      v9 = (unsigned int *)(v11 - 8);
      if ( &pthread_create )
      {
        do
          v10 = __ldaxr(v9);
        while ( __stlxr(v10 - 1, v9) );
      }
      else
      {
        v10 = (*v9)--;
      }
      if ( v10 <= 0 )
        operator delete(v5);
    }
  }
  v6 = (void *)(v12[0] - 24LL);
  if ( (__int64 *)(v12[0] - 24LL) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(v12[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v8 = __ldaxr(v7);
      while ( __stlxr(v8 - 1, v7) );
    }
    else
    {
      v8 = (*v7)--;
    }
    if ( v8 <= 0 )
      operator delete(v6);
  }
}

