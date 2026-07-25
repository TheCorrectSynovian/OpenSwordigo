/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000481CE8
 * Mangled: _ZN5Caver11MusicPlayer18UpdatePlayerVolumeEv
 * Demangled: Caver::MusicPlayer::UpdatePlayerVolume(void)
 *
 * Callers: 1
 *   0x00000000001FBE80  Caver::MusicPlayer::UpdatePlayerVolume(void)
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 47
 *   insn=0x0000000000481CFC string=0x0000000000481D00 "U"
 *   insn=0x0000000000481D10 string=0x0000000000481D14 "i"
 *   insn=0x0000000000481D1C string=0x0000000000481D20 ""
 *   insn=0x0000000000481D20 string=0x0000000000481D24 "65@"
 *   insn=0x0000000000481D24 string=0x0000000000481D28 "!"
 *   insn=0x0000000000481D2C string=0x0000000000481D30 "h"
 *   insn=0x0000000000481D38 string=0x0000000000481D3C "@"
 *   insn=0x0000000000481D3C string=0x0000000000481D64 "("
 *   insn=0x0000000000481D54 string=0x0000000000481D58 "\t"
 *   insn=0x0000000000481D5C string=0x0000000000481D60 ""
 *   insn=0x0000000000481D64 string=0x0000000000481D68 ""
 *   insn=0x0000000000481D70 string=0x0000000000481D74 "a"
 *   insn=0x0000000000481D90 string=0x0000000000481D94 ")"
 *   insn=0x0000000000481D94 string=0x0000000000481D98 ")"
 *   insn=0x0000000000481DA0 string=0x0000000000481DA4 "a"
 *   insn=0x0000000000481DA4 string=0x0000000000481DD0 "\t"
 *   insn=0x0000000000481DB4 string=0x0000000000481E14 "/"
 *   insn=0x0000000000481DD0 string=0x0000000000481DD4 ")=G"
 *   insn=0x0000000000481DD4 string=0x0000000000481DD8 "!"
 *   insn=0x0000000000481DDC string=0x0000000000481DE0 "\t"
 *   insn=0x0000000000481DDC string=0x0000000000481DF4 "\t"
 *   insn=0x0000000000481DE0 string=0x0000000000481DE4 "*"
 *   insn=0x0000000000481DE4 string=0x0000000000481DE8 "\n"
 *   insn=0x0000000000481DF0 string=0x0000000000481E00 "?"
 *   insn=0x0000000000481DF4 string=0x0000000000481DF8 "*"
 *   insn=0x0000000000481DF8 string=0x0000000000481DFC "\n"
 *   insn=0x0000000000481E00 string=0x0000000000481E04 ","
 *   insn=0x0000000000481E08 string=0x0000000000481E0C "f"
 *   insn=0x0000000000481E14 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000481E18 string=0x0000000000481E1C "t"
 *   insn=0x0000000000481E20 string=0x0000000000481E24 ")"
 *   insn=0x0000000000481E24 string=0x0000000000481E28 ")"
 *   insn=0x0000000000481E34 string=0x0000000000481E38 "\t"
 *   insn=0x0000000000481E38 string=0x0000000000481E3C ")=G"
 *   insn=0x0000000000481E3C string=0x0000000000481E40 "!"
 *   insn=0x0000000000481E40 string=0x0000000000481E44 "i"
 *   insn=0x0000000000481E44 string=0x0000000000481E48 "\t"
 *   insn=0x0000000000481E44 string=0x0000000000481E70 "\t"
 *   insn=0x0000000000481E48 string=0x0000000000481E4C "*"
 *   insn=0x0000000000481E4C string=0x0000000000481E50 "\n"
 *   insn=0x0000000000481E54 string=0x0000000000481E58 "?"
 *   insn=0x0000000000481E58 string=0x0000000000481E5C "l"
 *   insn=0x0000000000481E60 string=0x0000000000481E64 "P"
 *   insn=0x0000000000481E70 string=0x0000000000481E74 "*"
 *   insn=0x0000000000481E74 string=0x0000000000481E78 "\n"
 *   insn=0x0000000000481E78 string=0x0000000000481E7C "?"
 *   insn=0x0000000000481E7C string=0x0000000000481E80 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MusicPlayer::UpdatePlayerVolume(Caver::MusicPlayer *this)
{
  __int64 v1; // x19
  __int64 v2; // x8
  void (__fastcall *v3)(__int64, float); // x22
  float v4; // s8
  float v5; // s0
  __int64 v6; // x20
  int v7; // w20
  char *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  char *v11; // [xsp+8h] [xbp-48h] BYREF
  int v12; // [xsp+10h] [xbp-40h]
  __int64 v13; // [xsp+18h] [xbp-38h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    v2 = *((_QWORD *)this + 6);
    v3 = *(void (__fastcall **)(__int64, float))(*(_QWORD *)v1 + 104LL);
    v4 = *((float *)this + 1) * *((float *)this + 10);
    v5 = 1.0;
    if ( v2 )
    {
      v6 = *(_QWORD *)(v2 + 16);
      if ( v6 == *(_QWORD *)(v2 + 24) )
      {
        v12 = 1065353216;
        v11 = &byte_6FD2F8;
      }
      else
      {
        sub_56A528(&v11, v6);
        v12 = *(_DWORD *)(v6 + 8);
        v5 = *(float *)&v12;
      }
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    v3(v1, v4 * v5);
    if ( v7 )
    {
      v8 = v11 - 24;
      if ( v11 - 24 != (char *)&qword_6FD2E0 )
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
          operator delete(v8);
      }
    }
  }
}

