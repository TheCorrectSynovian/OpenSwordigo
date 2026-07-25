/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E8E38
 * Mangled: _ZN5Caver5Proto21PlayerProfile_CounterD0Ev
 * Demangled: Caver::Proto::PlayerProfile_Counter::~PlayerProfile_Counter()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000002E8F34  Caver::Proto::PlayerProfile_Counter::SetCachedSize(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 25
 *   insn=0x00000000002E8E44 string=0x00000000002E8E48 "T"
 *   insn=0x00000000002E8E5C string=0x00000000002E8E60 "`\n@"
 *   insn=0x00000000002E8E60 string=0x00000000002E8E64 ""
 *   insn=0x00000000002E8E64 string=0x00000000002E8E68 ")"
 *   insn=0x00000000002E8E68 string=0x00000000002E8E6C "A"
 *   insn=0x00000000002E8E70 string=0x00000000002E8E74 "h"
 *   insn=0x00000000002E8E74 string=0x00000000002E8E78 " "
 *   insn=0x00000000002E8E7C string=0x00000000002E8E80 "\t"
 *   insn=0x00000000002E8E84 string=0x00000000002E8E88 "J"
 *   insn=0x00000000002E8E88 string=0x00000000002E8E8C "(a"
 *   insn=0x00000000002E8E98 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002E8EA0 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002E8EB4 string=0x00000000002E8EB8 "!"
 *   insn=0x00000000002E8ECC string=0x00000000002E8ED0 "J=G"
 *   insn=0x00000000002E8ED0 string=0x00000000002E8ED4 ")!"
 *   insn=0x00000000002E8ED8 string=0x00000000002E8EDC "*"
 *   insn=0x00000000002E8ED8 string=0x00000000002E8EF0 "*"
 *   insn=0x00000000002E8EDC string=0x00000000002E8EE0 "K"
 *   insn=0x00000000002E8EE0 string=0x00000000002E8EE4 "+"
 *   insn=0x00000000002E8EEC string=0x00000000002E8EFC "_"
 *   insn=0x00000000002E8EF0 string=0x00000000002E8EF4 "K"
 *   insn=0x00000000002E8EF4 string=0x00000000002E8EF8 "+"
 *   insn=0x00000000002E8F0C string=0x00000000002E8F10 "%"
 *   insn=0x00000000002E8F1C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002E8F2C string=0x00000000002E8F30 "eb\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PlayerProfile_Counter::~PlayerProfile_Counter(Caver::Proto::PlayerProfile_Counter *this)
{
  __int64 *v2; // x0
  __int64 *v3; // x8
  unsigned int *v4; // x9
  int v5; // w10
  __int64 *v6; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int64 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = off_6C6D30;
  if ( v2 != &Caver::Proto::PlayerProfile_Counter::_default_name_ && v2 )
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

