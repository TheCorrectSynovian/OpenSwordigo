/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F2A10
 * Mangled: _ZN5Caver5Proto24CharacterState_ItemStateD0Ev
 * Demangled: Caver::Proto::CharacterState_ItemState::~CharacterState_ItemState()
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000002F2B0C  Caver::Proto::CharacterState_ItemState::SetCachedSize(int)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 25
 *   insn=0x00000000002F2A1C string=0x00000000002F2A20 "T"
 *   insn=0x00000000002F2A34 string=0x00000000002F2A38 "`\n@"
 *   insn=0x00000000002F2A38 string=0x00000000002F2A3C ""
 *   insn=0x00000000002F2A3C string=0x00000000002F2A40 "))G"
 *   insn=0x00000000002F2A40 string=0x00000000002F2A44 "A"
 *   insn=0x00000000002F2A48 string=0x00000000002F2A4C "h"
 *   insn=0x00000000002F2A4C string=0x00000000002F2A50 " "
 *   insn=0x00000000002F2A54 string=0x00000000002F2A58 "\t"
 *   insn=0x00000000002F2A5C string=0x00000000002F2A60 "J"
 *   insn=0x00000000002F2A60 string=0x00000000002F2A64 "(a"
 *   insn=0x00000000002F2A70 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002F2A78 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002F2A8C string=0x00000000002F2A90 "!"
 *   insn=0x00000000002F2AA4 string=0x00000000002F2AA8 "J=G"
 *   insn=0x00000000002F2AA8 string=0x00000000002F2AAC ")!"
 *   insn=0x00000000002F2AB0 string=0x00000000002F2AB4 "*"
 *   insn=0x00000000002F2AB0 string=0x00000000002F2AC8 "*"
 *   insn=0x00000000002F2AB4 string=0x00000000002F2AB8 "K"
 *   insn=0x00000000002F2AB8 string=0x00000000002F2ABC "+"
 *   insn=0x00000000002F2AC4 string=0x00000000002F2AD4 "_"
 *   insn=0x00000000002F2AC8 string=0x00000000002F2ACC "K"
 *   insn=0x00000000002F2ACC string=0x00000000002F2AD0 "+"
 *   insn=0x00000000002F2AE4 string=0x00000000002F2AE8 "/"
 *   insn=0x00000000002F2AF4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002F2B04 string=0x00000000002F2B08 "o;\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::CharacterState_ItemState::~CharacterState_ItemState(
        Caver::Proto::CharacterState_ItemState *this)
{
  __int64 *v2; // x0
  __int64 *v3; // x8
  unsigned int *v4; // x9
  int v5; // w10
  __int64 *v6; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = (__int64 *)*((_QWORD *)this + 2);
  *(_QWORD *)this = off_6C7078;
  if ( v2 != &Caver::Proto::CharacterState_ItemState::_default_name_ && v2 )
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

