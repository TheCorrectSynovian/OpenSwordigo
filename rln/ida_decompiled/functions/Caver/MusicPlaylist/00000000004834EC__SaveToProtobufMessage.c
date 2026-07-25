/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004834EC
 * Mangled: _ZN5Caver13MusicPlaylist21SaveToProtobufMessageEPNS_5Proto13MusicPlaylistE
 * Demangled: Caver::MusicPlaylist::SaveToProtobufMessage(Caver::Proto::MusicPlaylist *)
 *
 * Callers: 0
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000002035E0  Caver::Proto::MusicTrack::MusicTrack(void)
 *   0x0000000000483750  std::_List_base<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>::~_List_base()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 69
 *   insn=0x0000000000483508 string=0x000000000048350C "W"
 *   insn=0x0000000000483514 string=0x0000000000483518 "\t"
 *   insn=0x0000000000483520 string=0x0000000000483524 "hR@"
 *   insn=0x0000000000483524 string=0x0000000000483528 "`\n@"
 *   insn=0x0000000000483528 string=0x000000000048352C ")"
 *   insn=0x000000000048352C string=0x0000000000483530 ""
 *   insn=0x0000000000483530 string=0x0000000000483534 "hR"
 *   insn=0x0000000000483540 string=0x0000000000483544 "'"
 *   insn=0x0000000000483544 string=0x0000000000483548 ""
 *   insn=0x0000000000483544 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000483548 string=0x000000000048354C ""
 *   insn=0x000000000048354C string=0x0000000000483550 "a"
 *   insn=0x0000000000483550 string=0x0000000000483554 ""
 *   insn=0x0000000000483554 string=0x0000000000483558 "`\n"
 *   insn=0x000000000048355C string=0x0000000000483560 "R"
 *   insn=0x000000000048356C string=0x0000000000483570 ";"
 *   insn=0x0000000000483574 string=0x0000000000483578 "{"
 *   insn=0x0000000000483578 string=0x000000000048357C "Z"
 *   insn=0x0000000000483580 string=0x0000000000483584 "9?G"
 *   insn=0x0000000000483584 string=0x0000000000483588 "ub"
 *   insn=0x0000000000483588 string=0x000000000048358C "\c"
 *   insn=0x0000000000483590 string=0x00000000004835D0 "i"D))}@"
 *   insn=0x0000000000483598 string=0x000000000048359C "\t"
 *   insn=0x0000000000483598 string=0x00000000004835B0 "\t"
 *   insn=0x000000000048359C string=0x00000000004835A0 "*"
 *   insn=0x00000000004835A0 string=0x00000000004835A4 "\n"
 *   insn=0x00000000004835AC string=0x00000000004835BC "?"
 *   insn=0x00000000004835B0 string=0x00000000004835B4 "*"
 *   insn=0x00000000004835B4 string=0x00000000004835B8 "\n"
 *   insn=0x00000000004835BC string=0x00000000004835C0 "L"
 *   insn=0x00000000004835C4 string=0x00000000004835C8 "w"
 *   insn=0x00000000004835C8 string=0x00000000004835CC "/"
 *   insn=0x00000000004835D0 string=0x00000000004835D4 ")}@"
 *   insn=0x00000000004835D4 string=0x00000000004835D8 "?"
 *   insn=0x00000000004835DC string=0x00000000004835E0 "h"
 *   insn=0x00000000004835DC string=0x00000000004835F4 "i*@"
 *   insn=0x00000000004835E0 string=0x00000000004835E4 "*"
 *   insn=0x00000000004835E4 string=0x00000000004835E8 "j""
 *   insn=0x00000000004835FC string=0x0000000000483610 ""
 *   insn=0x0000000000483608 string=0x000000000048360C "h&@"
 *   insn=0x0000000000483608 string=0x00000000001FAD20 "0'"
 *   insn=0x0000000000483614 string=0x0000000000483618 "h&"
 *   insn=0x0000000000483624 string=0x0000000000483628 "h""
 *   insn=0x0000000000483628 string=0x000000000048362C "i"
 *   insn=0x000000000048362C string=0x0000000000483630 "\n"
 *   insn=0x0000000000483630 string=0x0000000000483634 "j""
 *   insn=0x0000000000483634 string=0x0000000000483638 "6y("
 *   insn=0x000000000048364C string=0x0000000000483650 ""
 *   insn=0x0000000000483670 string=0x0000000000483674 ""
 *   insn=0x0000000000483684 string=0x0000000000483594 "!"
 *   insn=0x0000000000483694 string=0x0000000000483698 ""
 *   insn=0x00000000004836AC string=0x00000000004836B0 "!"
 *   insn=0x00000000004836D4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004836E0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004836E4 string=0x00000000004836E8 "w"
 *   insn=0x00000000004836F0 string=0x00000000004836F4 "(a"
 *   insn=0x00000000004836F8 string=0x00000000004836FC "`"
 *   insn=0x00000000004836FC string=0x0000000000483700 ")!"
 *   insn=0x0000000000483704 string=0x0000000000483708 "*"
 *   insn=0x0000000000483704 string=0x0000000000483734 "*"
 *   insn=0x0000000000483708 string=0x000000000048370C "K"
 *   insn=0x000000000048370C string=0x0000000000483710 "+"
 *   insn=0x0000000000483714 string=0x0000000000483718 "_"
 *   insn=0x0000000000483718 string=0x000000000048371C "l"
 *   insn=0x000000000048372C string=0x0000000000483730 "e"
 *   insn=0x0000000000483734 string=0x0000000000483738 "K"
 *   insn=0x0000000000483738 string=0x000000000048373C "+"
 *   insn=0x000000000048373C string=0x0000000000483740 "_"
 *   insn=0x0000000000483748 string=0x000000000048374C "^"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MusicPlaylist::SaveToProtobufMessage(
        Caver::MusicPlaylist *this,
        Caver::Proto::MusicPlaylist *a2)
{
  __int64 *v4; // x0
  __int64 v5; // x20
  __int64 i; // x24
  unsigned int *v7; // x8
  int v8; // w9
  int v9; // w8
  __int64 v10; // x9
  __int64 v11; // x8
  __int64 v12; // x22
  __int64 v13; // x8
  __int64 v14; // x9
  __int64 *v15; // x0
  void *v16; // x0
  int v17; // w9
  int v18; // w8
  _QWORD v19[3]; // [xsp+8h] [xbp-68h] BYREF

  v19[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = (__int64 *)*((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 20) |= 1u;
  if ( v4 == &Caver::Proto::MusicPlaylist::_default_name_ )
  {
    v4 = (__int64 *)operator new(8u);
    *v4 = (__int64)&byte_6FD2F8;
    *((_QWORD *)a2 + 2) = v4;
  }
  sub_56A6A8(v4);
  v5 = *((_QWORD *)this + 2);
  for ( i = *((_QWORD *)this + 3); v5 != i; *(_DWORD *)(v12 + 28) = v18 )
  {
    v9 = *((_DWORD *)a2 + 9);
    v10 = *((int *)a2 + 8);
    if ( (int)v10 >= v9 )
    {
      if ( v9 == *((_DWORD *)a2 + 10) )
      {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
          (Caver::Proto::MusicPlaylist *)((char *)a2 + 24),
          v9 + 1);
        v9 = *((_DWORD *)a2 + 9);
      }
      *((_DWORD *)a2 + 9) = v9 + 1;
      v12 = operator new(0x20u);
      Caver::Proto::MusicTrack::MusicTrack((Caver::Proto::MusicTrack *)v12);
      v13 = *((int *)a2 + 8);
      v14 = *((_QWORD *)a2 + 3);
      *((_DWORD *)a2 + 8) = v13 + 1;
      *(_QWORD *)(v14 + 8 * v13) = v12;
    }
    else
    {
      v11 = *((_QWORD *)a2 + 3);
      *((_DWORD *)a2 + 8) = v10 + 1;
      v12 = *(_QWORD *)(v11 + 8 * v10);
    }
    sub_56A528(v19, v5);
    v15 = *(__int64 **)(v12 + 16);
    *(_DWORD *)(v12 + 28) |= 1u;
    if ( v15 == &Caver::Proto::MusicTrack::_default_resource_name_ )
    {
      v15 = (__int64 *)operator new(8u);
      *v15 = (__int64)&byte_6FD2F8;
      *(_QWORD *)(v12 + 16) = v15;
    }
    sub_56A6A8(v15);
    v16 = (void *)(v19[0] - 24LL);
    if ( (__int64 *)(v19[0] - 24LL) != &qword_6FD2E0 )
    {
      v7 = (unsigned int *)(v19[0] - 8LL);
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
        operator delete(v16);
    }
    v17 = *(_DWORD *)(v5 + 8);
    v5 += 16;
    v18 = *(_DWORD *)(v12 + 28) | 2;
    *(_DWORD *)(v12 + 24) = v17;
  }
}

