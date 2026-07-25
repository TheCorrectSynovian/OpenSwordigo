/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D8B8C
 * Mangled: _ZN5Caver5Proto10MusicTrack10SharedDtorEv
 * Demangled: Caver::Proto::MusicTrack::SharedDtor(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 25
 *   insn=0x00000000002D8B98 string=0x00000000002D8B9C "S"
 *   insn=0x00000000002D8B9C string=0x00000000002D8BA0 "h"
 *   insn=0x00000000002D8BA4 string=0x00000000002D8BA8 "h "
 *   insn=0x00000000002D8BAC string=0x00000000002D8BB0 ""
 *   insn=0x00000000002D8BB4 string=0x00000000002D8BB8 " "
 *   insn=0x00000000002D8BB8 string=0x00000000002D8BDC "h"
 *   insn=0x00000000002D8BBC string=0x00000000002D8BC0 "\t"
 *   insn=0x00000000002D8BC0 string=0x00000000002D8BC4 "j "
 *   insn=0x00000000002D8BC4 string=0x00000000002D8BC8 "J"
 *   insn=0x00000000002D8BC8 string=0x00000000002D8BCC "(a"
 *   insn=0x00000000002D8BD0 string=0x00000000002D8BD4 "A"
 *   insn=0x00000000002D8BD4 string=0x00000000002D8BFC "j "
 *   insn=0x00000000002D8BD8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002D8BE4 string=0x00000000002D8BE8 "!"
 *   insn=0x00000000002D8BFC string=0x00000000002D8C00 "J=G"
 *   insn=0x00000000002D8C00 string=0x00000000002D8C04 ")!"
 *   insn=0x00000000002D8C08 string=0x00000000002D8C0C "*"
 *   insn=0x00000000002D8C08 string=0x00000000002D8C20 "*"
 *   insn=0x00000000002D8C0C string=0x00000000002D8C10 "K"
 *   insn=0x00000000002D8C10 string=0x00000000002D8C14 "+"
 *   insn=0x00000000002D8C1C string=0x00000000002D8C2C "_"
 *   insn=0x00000000002D8C20 string=0x00000000002D8C24 "K"
 *   insn=0x00000000002D8C24 string=0x00000000002D8C28 "+"
 *   insn=0x00000000002D8C2C string=0x00000000002D8C30 "L"
 *   insn=0x00000000002D8C4C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MusicTrack::SharedDtor(Caver::Proto::MusicTrack *this)
{
  __int64 *v1; // x0
  __int64 *v2; // x8
  unsigned int *v3; // x9
  int v4; // w10
  __int64 *v5; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v1 = (__int64 *)*((_QWORD *)this + 2);
  if ( v1 != &Caver::Proto::MusicTrack::_default_resource_name_ && v1 )
  {
    v2 = (__int64 *)(*v1 - 24);
    if ( v2 != &qword_6FD2E0 )
    {
      v3 = (unsigned int *)(*v1 - 8);
      if ( &pthread_create )
      {
        do
          v4 = __ldaxr(v3);
        while ( __stlxr(v4 - 1, v3) );
      }
      else
      {
        v4 = (*v3)--;
      }
      if ( v4 <= 0 )
      {
        v5 = v1;
        operator delete(v2);
        v1 = v5;
      }
    }
    operator delete(v1);
  }
}

