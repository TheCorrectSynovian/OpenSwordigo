/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000492DF0
 * Mangled: _ZN5Caver14GUIApplication9SendEventEPvRKN5boost8functionIFvS1_PNS_8GUIEventEEEERKNS2_10shared_ptrIvEERKNSA_IS4_EE
 * Demangled: Caver::GUIApplication::SendEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,boost::shared_ptr<void> const&,boost::shared_ptr<Caver::GUIEvent> const&)
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F4710  Caver::GUIApplication::QueuedEvent::~QueuedEvent()
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FFB10  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_push_back_aux(Caver::GUIApplication::QueuedEvent const&)
 *   0x00000000002006A0  std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_erase(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,Caver::GUIApplication::QueuedEvent&,Caver::GUIApplication::QueuedEvent*>)
 *   0x00000000002033A0  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=(boost::function<void ()(void *,Caver::GUIEvent *)> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 82
 *   insn=0x0000000000492E00 string=0x0000000000492E04 "V"
 *   insn=0x0000000000492E1C string=0x0000000000492E20 "i*@"
 *   insn=0x0000000000492E20 string=0x0000000000492E24 "\t"
 *   insn=0x0000000000492E3C string=0x0000000000492E40 "X"
 *   insn=0x0000000000492E48 string=0x0000000000492E4C "\n"
 *   insn=0x0000000000492E4C string=0x0000000000492E50 "J"
 *   insn=0x0000000000492E50 string=0x0000000000492E54 "\n"
 *   insn=0x0000000000492E5C string=0x0000000000492E60 "5"
 *   insn=0x0000000000492E64 string=0x0000000000492E68 ""
 *   insn=0x0000000000492E74 string=0x0000000000492E78 "\t@"
 *   insn=0x0000000000492E84 string=0x0000000000492E88 ""
 *   insn=0x0000000000492E94 string=0x0000000000492E98 "@"
 *   insn=0x0000000000492EA8 string=0x0000000000492EAC "\n"
 *   insn=0x0000000000492EAC string=0x0000000000492EB0 "J"
 *   insn=0x0000000000492EB0 string=0x0000000000492EB4 "\n"
 *   insn=0x0000000000492EBC string=0x0000000000492EC0 "4"
 *   insn=0x0000000000492EC0 string=0x0000000000492F04 "h"@"
 *   insn=0x0000000000492EC4 string=0x0000000000492EC8 ""
 *   insn=0x0000000000492ED4 string=0x0000000000492ED8 "\t@"
 *   insn=0x0000000000492EE4 string=0x0000000000492EE8 ""
 *   insn=0x0000000000492EF4 string=0x0000000000492EF8 "@"
 *   insn=0x0000000000492F04 string=0x0000000000492F08 "t"
 *   insn=0x0000000000492F08 string=0x0000000000492F0C "!"
 *   insn=0x0000000000492F20 string=0x0000000000492F24 "h"
 *   insn=0x0000000000492F2C string=0x0000000000492F30 ""
 *   insn=0x0000000000492F30 string=0x0000000000492F34 ""
 *   insn=0x0000000000492F38 string=0x0000000000492F3C " A"
 *   insn=0x0000000000492F48 string=0x0000000000492F4C "\t"
 *   insn=0x0000000000492F80 string=0x0000000000492F84 "\t"
 *   insn=0x0000000000492F84 string=0x0000000000492F88 ")"
 *   insn=0x0000000000492F88 string=0x0000000000492F8C "\t"
 *   insn=0x0000000000492FA0 string=0x0000000000492FA4 "\t"
 *   insn=0x0000000000492FA0 string=0x0000000000492FB0 "h"
 *   insn=0x0000000000492FA4 string=0x0000000000492FA8 ")"
 *   insn=0x0000000000492FA8 string=0x0000000000492FAC "\t"
 *   insn=0x0000000000492FB0 string=0x0000000000492FB4 "!"
 *   insn=0x0000000000492FB4 string=0x0000000000492FB8 "h"
 *   insn=0x0000000000492FC0 string=0x00000000001F4710 "P'"
 *   insn=0x0000000000492FE8 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000492FF8 string=0x0000000000492FFC "2"
 *   insn=0x0000000000493014 string=0x0000000000493018 "t"@"
 *   insn=0x0000000000493018 string=0x000000000049301C "4"
 *   insn=0x000000000049301C string=0x0000000000493060 "t"
 *   insn=0x0000000000493020 string=0x0000000000493024 ""
 *   insn=0x0000000000493030 string=0x0000000000493034 "\t@"
 *   insn=0x0000000000493040 string=0x0000000000493044 ""
 *   insn=0x0000000000493050 string=0x0000000000493054 "@"
 *   insn=0x0000000000493060 string=0x0000000000493064 "4"
 *   insn=0x0000000000493064 string=0x00000000004930A8 "h"
 *   insn=0x0000000000493068 string=0x000000000049306C ""
 *   insn=0x0000000000493078 string=0x000000000049307C "\t@"
 *   insn=0x0000000000493088 string=0x000000000049308C ""
 *   insn=0x0000000000493098 string=0x000000000049309C "@"
 *   insn=0x00000000004930A8 string=0x00000000004930AC "H"
 *   insn=0x00000000004930AC string=0x00000000004930B0 ""
 *   insn=0x00000000004930B0 string=0x00000000004930B4 ""
 *   insn=0x00000000004930B4 string=0x00000000004930B8 ""
 *   insn=0x00000000004930BC string=0x00000000004930C0 "`B"
 *   insn=0x00000000004930E4 string=0x00000000004930E8 "h"
 *   insn=0x00000000004930EC string=0x0000000000493148 ""
 *   insn=0x00000000004930F8 string=0x00000000004930FC "5"
 *   insn=0x00000000004930FC string=0x0000000000493140 "h"
 *   insn=0x0000000000493100 string=0x0000000000493104 ""
 *   insn=0x0000000000493110 string=0x0000000000493114 "\t@"
 *   insn=0x0000000000493120 string=0x0000000000493124 ""
 *   insn=0x0000000000493130 string=0x0000000000493134 "@"
 *   insn=0x0000000000493140 string=0x0000000000493144 "H"
 *   insn=0x0000000000493148 string=0x000000000049314C ""
 *   insn=0x000000000049314C string=0x0000000000493150 ""
 *   insn=0x0000000000493154 string=0x0000000000493158 "`B"
 *   insn=0x0000000000493170 string=0x0000000000493174 "v"
 *   insn=0x0000000000493188 string=0x000000000049318C "V"
 *   insn=0x00000000004931A8 string=0x00000000004931AC "?"
 *   insn=0x00000000004931C0 string=0x00000000004931D0 "!"
 *   insn=0x00000000004931D8 string=0x00000000004931DC "H"
 *   insn=0x00000000004931D8 string=0x0000000000493218 "?"
 *   insn=0x00000000004931DC string=0x00000000004931E0 ""
 *   insn=0x00000000004931E0 string=0x00000000004931E4 ""
 *   insn=0x00000000004931E8 string=0x00000000004931EC "H"
 *   insn=0x00000000004931F8 string=0x00000000004931FC ""
 *   insn=0x0000000000493204 string=0x0000000000493208 "&"
 *   insn=0x000000000049322C string=0x0000000000493244 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIApplication::SendEvent(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  _QWORD *v8; // x8
  __int64 v9; // x9
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x8
  _QWORD *v13; // x8
  _QWORD *v14; // x9
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x8
  __int64 v18; // x20
  __int64 v19; // x8
  _QWORD *v20; // x8
  _QWORD *v21; // x8
  __int64 v22; // [xsp+78h] [xbp-70h] BYREF
  __int64 v23; // [xsp+80h] [xbp-68h]
  __int128 v24; // [xsp+88h] [xbp-60h] BYREF
  __int64 v25; // [xsp+98h] [xbp-50h]
  __int64 v26; // [xsp+A0h] [xbp-48h]
  _QWORD *v27; // [xsp+A8h] [xbp-40h]
  _QWORD *v28; // [xsp+B0h] [xbp-38h]
  _QWORD *v29; // [xsp+B8h] [xbp-30h]
  __int64 v30; // [xsp+C0h] [xbp-28h]

  v30 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  **(_QWORD **)a5 = a1[10];
  v22 = a2;
  v23 = 0;
  v28 = 0;
  v29 = 0;
  v26 = 0;
  v27 = 0;
  boost::function<void ()(void *,Caver::GUIEvent *)>::operator=();
  v9 = *a4;
  v8 = (_QWORD *)a4[1];
  if ( v8 )
    ++v8[1];
  v10 = v27;
  v26 = v9;
  v27 = v8;
  if ( v10 )
  {
    v11 = v10[1] - 1LL;
    v10[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  v14 = *(_QWORD **)a5;
  v13 = *(_QWORD **)(a5 + 8);
  if ( v13 )
    ++v13[1];
  v15 = v29;
  v28 = v14;
  v29 = v13;
  if ( v15 )
  {
    v16 = v15[1] - 1LL;
    v15[1] = v16;
    if ( !v16 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      v17 = v15[2] - 1LL;
      v15[2] = v17;
      if ( !v17 )
        (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
    }
  }
  v18 = a1[6];
  if ( v18 == a1[8] - 72LL )
  {
    std::deque<Caver::GUIApplication::QueuedEvent>::_M_push_back_aux();
  }
  else
  {
    *(_QWORD *)v18 = v22;
    *(_QWORD *)(v18 + 8) = 0;
    v19 = v23;
    if ( v23 )
    {
      *(_QWORD *)(v18 + 8) = v23;
      if ( (v19 & 1) != 0 )
      {
        *(_QWORD *)(v18 + 32) = v25;
        *(_OWORD *)(v18 + 16) = v24;
      }
      else
      {
        (*(void (__fastcall **)(__int128 *, __int64, _QWORD))(v19 & 0xFFFFFFFFFFFFFFFELL))(&v24, v18 + 16, 0);
      }
    }
    *(_QWORD *)(v18 + 40) = v26;
    v20 = v27;
    *(_QWORD *)(v18 + 48) = v27;
    if ( v20 )
      ++v20[1];
    *(_QWORD *)(v18 + 56) = v28;
    v21 = v29;
    *(_QWORD *)(v18 + 64) = v29;
    if ( v21 )
      ++v21[1];
    a1[6] += 72LL;
  }
  Caver::GUIApplication::QueuedEvent::~QueuedEvent((Caver::GUIApplication::QueuedEvent *)&v22);
}

