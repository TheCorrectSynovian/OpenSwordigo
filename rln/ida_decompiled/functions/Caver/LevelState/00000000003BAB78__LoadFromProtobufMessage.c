/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BAB78
 * Mangled: _ZN5Caver10LevelState23LoadFromProtobufMessageERKNS_5Proto10LevelStateE
 * Demangled: Caver::LevelState::LoadFromProtobufMessage(Caver::Proto::LevelState const&)
 *
 * Callers: 1
 *   0x00000000001FF800  Caver::LevelState::LoadFromProtobufMessage(Caver::Proto::LevelState const&)
 *
 * Callees: 2
 *   0x0000000000201D60  Caver::StateProperties::LoadFromProtobufMessage(Caver::Proto::StateProperties const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 17
 *   insn=0x00000000003BAB84 string=0x00000000003BAB88 "a\n@"
 *   insn=0x00000000003BAB90 string=0x00000000003BAB94 "hb@9"
 *   insn=0x00000000003BAB98 string=0x00000000003BAB9C "h2@"
 *   insn=0x00000000003BAB9C string=0x00000000003BABA0 ""
 *   insn=0x00000000003BABA0 string=0x00000000003BABA4 "H"
 *   insn=0x00000000003BABA0 string=0x00000000003BABC0 "i"
 *   insn=0x00000000003BABA4 string=0x00000000003BABA8 "h"
 *   insn=0x00000000003BABA4 string=0x00000000003BABEC "h*@"
 *   insn=0x00000000003BABA8 string=0x00000000003BABAC "h.@"
 *   insn=0x00000000003BABC0 string=0x00000000003BABC4 "h"
 *   insn=0x00000000003BABC4 string=0x00000000003BABC8 ")!A"
 *   insn=0x00000000003BABD0 string=0x00000000003BABD4 ")"
 *   insn=0x00000000003BABD4 string=0x00000000003BABD8 "("
 *   insn=0x00000000003BABDC string=0x00000000003BABE0 "`"
 *   insn=0x00000000003BABE0 string=0x00000000003BABE4 "h2@"
 *   insn=0x00000000003BABE4 string=0x00000000003BABE8 ""
 *   insn=0x00000000003BABF0 string=0x00000000003BABF4 "h2@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LevelState::LoadFromProtobufMessage(
        Caver::LevelState *this,
        const Caver::Proto::LevelState *a2)
{
  __int64 result; // x0
  int v5; // w8
  const Caver::Proto::LevelState *v6; // x8

  result = sub_56A6A8(this);
  *((_BYTE *)this + 8) = *((_BYTE *)a2 + 24);
  v5 = *((_DWORD *)a2 + 12);
  if ( (v5 & 4) != 0 )
  {
    if ( *((_QWORD *)a2 + 4) )
      v6 = a2;
    else
      v6 = (const Caver::Proto::LevelState *)Caver::Proto::LevelState::default_instance_;
    result = Caver::StateProperties::LoadFromProtobufMessage(
               (Caver::LevelState *)((char *)this + 16),
               *((const Caver::Proto::StateProperties **)v6 + 4));
    v5 = *((_DWORD *)a2 + 12);
    if ( (v5 & 8) == 0 )
    {
LABEL_3:
      if ( (v5 & 0x10) == 0 )
        return result;
      goto LABEL_4;
    }
  }
  else if ( (v5 & 8) == 0 )
  {
    goto LABEL_3;
  }
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 10);
  if ( (*((_DWORD *)a2 + 12) & 0x10) == 0 )
    return result;
LABEL_4:
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 11);
  return result;
}

