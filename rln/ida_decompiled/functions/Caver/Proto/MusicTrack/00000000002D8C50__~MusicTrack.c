/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D8C50
 * Mangled: _ZN5Caver5Proto10MusicTrackD0Ev
 * Demangled: Caver::Proto::MusicTrack::~MusicTrack()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000002D8D4C  Caver::Proto::MusicTrack::SetCachedSize(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 31
 *   insn=0x00000000002D8C5C string=0x00000000002D8C60 "T"
 *   insn=0x00000000002D8C68 string=0x00000000002D8C6C "i "
 *   insn=0x00000000002D8C70 string=0x00000000002D8C74 "h "
 *   insn=0x00000000002D8C74 string=0x00000000002D8C78 "`\n@"
 *   insn=0x00000000002D8C78 string=0x00000000002D8C7C "}B"
 *   insn=0x00000000002D8C7C string=0x00000000002D8C80 ")"
 *   insn=0x00000000002D8C80 string=0x00000000002D8C84 "A"
 *   insn=0x00000000002D8C88 string=0x00000000002D8C8C "h"
 *   insn=0x00000000002D8C8C string=0x00000000002D8C90 " "
 *   insn=0x00000000002D8C94 string=0x00000000002D8C98 "\t"
 *   insn=0x00000000002D8C98 string=0x00000000002D8C9C "j "
 *   insn=0x00000000002D8C9C string=0x00000000002D8CA0 "J"
 *   insn=0x00000000002D8CA0 string=0x00000000002D8CA4 "(a"
 *   insn=0x00000000002D8CAC string=0x00000000002D8CE4 "j "
 *   insn=0x00000000002D8CB0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002D8CB4 string=0x00000000002D8CB8 "Rz"
 *   insn=0x00000000002D8CB8 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D8CBC string=0x00000000002D8CC0 "|y"
 *   insn=0x00000000002D8CCC string=0x00000000002D8CD0 "!"
 *   insn=0x00000000002D8CD0 string=0x00000000002D8D34 "gu"
 *   insn=0x00000000002D8CE4 string=0x00000000002D8CE8 "J=G"
 *   insn=0x00000000002D8CE8 string=0x00000000002D8CEC ")!"
 *   insn=0x00000000002D8CF0 string=0x00000000002D8CF4 "*"
 *   insn=0x00000000002D8CF0 string=0x00000000002D8D08 "*"
 *   insn=0x00000000002D8CF4 string=0x00000000002D8CF8 "K"
 *   insn=0x00000000002D8CF8 string=0x00000000002D8CFC "+"
 *   insn=0x00000000002D8D04 string=0x00000000002D8D14 "_"
 *   insn=0x00000000002D8D08 string=0x00000000002D8D0C "K"
 *   insn=0x00000000002D8D0C string=0x00000000002D8D10 "+"
 *   insn=0x00000000002D8D34 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002D8D3C string=0x00000000002D8D40 "\y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MusicTrack::~MusicTrack(Caver::Proto::MusicTrack *this)
{
  __int64 *v2; // x0
  __int64 *v3; // x8
  unsigned int *v4; // x9
  int v5; // w10
  __int64 *v6; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int64 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = off_6C6200;
  if ( v2 != &Caver::Proto::MusicTrack::_default_resource_name_ && v2 )
  {
    v3 = (__int64 *)(*v2 - 24);
    if ( v3 != &qword_6FD2E0 )
    {
      v4 = (unsigned int *)(*v2 - 8);
      if ( &pthread_create )
      {
        do
          v5 = __ldaxr(v4);
        while ( __stlxr(v5 - 1, v4) );
      }
      else
      {
        v5 = (*v4)--;
      }
      if ( v5 <= 0 )
      {
        v6 = v2;
        operator delete(v3);
        v2 = v6;
      }
    }
    operator delete(v2);
  }
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

