/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003025D0
 * Mangled: _ZNK5Caver5Proto5Scene13IsInitializedEv
 * Demangled: Caver::Proto::Scene::IsInitialized(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x00000000003025DC string=0x00000000003025E0 "h"
 *   insn=0x00000000003025E8 string=0x0000000000302618 "hbB9"
 *   insn=0x00000000003025EC string=0x00000000003025F0 "h\n@"
 *   insn=0x00000000003025F4 string=0x00000000003025F8 ""
 *   insn=0x00000000003025F8 string=0x00000000003025FC ""
 *   insn=0x0000000000302604 string=0x0000000000302608 "h"
 *   insn=0x000000000030261C string=0x0000000000302620 ")"
 *   insn=0x0000000000302620 string=0x0000000000302624 "hB@"
 *   insn=0x0000000000302624 string=0x0000000000302628 ")"
 *   insn=0x000000000030262C string=0x0000000000302630 ")"
 *   insn=0x0000000000302630 string=0x0000000000302634 "("
 *   insn=0x0000000000302638 string=0x000000000030263C ""
 *   insn=0x000000000030263C string=0x0000000000302640 ""
 *   insn=0x0000000000302644 string=0x0000000000302648 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Scene::IsInitialized(Caver::Proto::Scene *this)
{
  __int64 v2; // x20
  __int64 v3; // x0
  Caver::Proto::Scene *v4; // x8

  if ( *((int *)this + 6) < 1 )
  {
LABEL_5:
    if ( (*((_BYTE *)this + 152) & 4) == 0 )
      return 1;
    v4 = *((_QWORD *)this + 16) ? this : (Caver::Proto::Scene *)Caver::Proto::Scene::default_instance_;
    if ( ((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v4 + 16) + 40LL))(*((_QWORD *)v4 + 16)) & 1) != 0 )
      return 1;
  }
  else
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v2);
      if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3) & 1) == 0 )
        break;
      if ( ++v2 >= *((int *)this + 6) )
        goto LABEL_5;
    }
  }
  return 0;
}

