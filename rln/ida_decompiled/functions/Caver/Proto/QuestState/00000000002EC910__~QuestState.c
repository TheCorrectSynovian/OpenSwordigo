/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC910
 * Mangled: _ZN5Caver5Proto10QuestStateD0Ev
 * Demangled: Caver::Proto::QuestState::~QuestState()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000002ECA0C  Caver::Proto::QuestState::SetCachedSize(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 29
 *   insn=0x00000000002EC91C string=0x00000000002EC920 "T"
 *   insn=0x00000000002EC934 string=0x00000000002EC938 "`\n@"
 *   insn=0x00000000002EC938 string=0x00000000002EC93C ""
 *   insn=0x00000000002EC93C string=0x00000000002EC940 ")"
 *   insn=0x00000000002EC940 string=0x00000000002EC944 "A"
 *   insn=0x00000000002EC948 string=0x00000000002EC94C "h"
 *   insn=0x00000000002EC94C string=0x00000000002EC950 " "
 *   insn=0x00000000002EC954 string=0x00000000002EC958 "\t"
 *   insn=0x00000000002EC95C string=0x00000000002EC960 "J"
 *   insn=0x00000000002EC960 string=0x00000000002EC964 "(a"
 *   insn=0x00000000002EC96C string=0x00000000002EC970 "P*"
 *   insn=0x00000000002EC970 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002EC974 string=0x00000000002EC978 ""+"
 *   insn=0x00000000002EC978 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002EC97C string=0x00000000002EC980 "L*"
 *   insn=0x00000000002EC98C string=0x00000000002EC990 "!"
 *   insn=0x00000000002EC990 string=0x00000000002EC9F4 "7&"
 *   insn=0x00000000002EC9A4 string=0x00000000002EC9A8 "J=G"
 *   insn=0x00000000002EC9A8 string=0x00000000002EC9AC ")!"
 *   insn=0x00000000002EC9B0 string=0x00000000002EC9B4 "*"
 *   insn=0x00000000002EC9B0 string=0x00000000002EC9C8 "*"
 *   insn=0x00000000002EC9B4 string=0x00000000002EC9B8 "K"
 *   insn=0x00000000002EC9B8 string=0x00000000002EC9BC "+"
 *   insn=0x00000000002EC9C4 string=0x00000000002EC9D4 "_"
 *   insn=0x00000000002EC9C8 string=0x00000000002EC9CC "K"
 *   insn=0x00000000002EC9CC string=0x00000000002EC9D0 "+"
 *   insn=0x00000000002EC9E4 string=0x00000000002EC9E8 "o"
 *   insn=0x00000000002EC9F4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002EC9FC string=0x00000000002ECA00 ",*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::QuestState::~QuestState(Caver::Proto::QuestState *this)
{
  __int64 *v2; // x0
  __int64 *v3; // x8
  unsigned int *v4; // x9
  int v5; // w10
  __int64 *v6; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int64 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = off_6C6E98;
  if ( v2 != &Caver::Proto::QuestState::_default_quest_name_ && v2 )
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

