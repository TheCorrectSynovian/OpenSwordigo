/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A0968
 * Mangled: _ZN5Caver32StaticMonsterControllerComponent7PrepareEv
 * Demangled: Caver::StaticMonsterControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4FA0  Caver::SoundEffectComponent::Play(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 82
 *   insn=0x00000000002A0978 string=0x00000000002A097C "uN@"
 *   insn=0x00000000002A0980 string=0x00000000002A0984 "`""
 *   insn=0x00000000002A0980 string=0x00000000002A0998 "`r@"
 *   insn=0x00000000002A0988 string=0x00000000002A098C "U\"
 *   insn=0x00000000002A098C string=0x00000000002A0990 "uN@"
 *   insn=0x00000000002A098C string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002A0990 string=0x00000000002A0994 "5"
 *   insn=0x00000000002A0994 string=0x00000000002A0A58 "hB@"
 *   insn=0x00000000002A099C string=0x00000000002A09A0 ""
 *   insn=0x00000000002A099C string=0x00000000002A0A10 "`B"
 *   insn=0x00000000002A09A0 string=0x00000000002A09A4 ""
 *   insn=0x00000000002A09B4 string=0x00000000002A09B8 "\t"
 *   insn=0x00000000002A09C8 string=0x00000000002A09CC "@"
 *   insn=0x00000000002A09CC string=0x00000000002A09D0 ""
 *   insn=0x00000000002A09D0 string=0x00000000002A09D4 ""
 *   insn=0x00000000002A09D8 string=0x00000000002A09DC ""
 *   insn=0x00000000002A09DC string=0x00000000002A09E0 ""
 *   insn=0x00000000002A09EC string=0x00000000002A09F0 ""
 *   insn=0x00000000002A0A00 string=0x00000000002A0A04 ""
 *   insn=0x00000000002A0A14 string=0x00000000002A0A18 "2\"
 *   insn=0x00000000002A0A18 string=0x00000000002A0A1C "`r@"
 *   insn=0x00000000002A0A20 string=0x00000000002A0A24 "uN@"
 *   insn=0x00000000002A0A28 string=0x00000000002A0A2C "`""
 *   insn=0x00000000002A0A30 string=0x00000000002A0A34 "+\"
 *   insn=0x00000000002A0A34 string=0x00000000002A0A38 "`r@"
 *   insn=0x00000000002A0A38 string=0x00000000002A0A3C "uN@"
 *   insn=0x00000000002A0A40 string=0x00000000002A0A44 "`B"
 *   insn=0x00000000002A0A48 string=0x00000000002A0A4C "%\"
 *   insn=0x00000000002A0A4C string=0x00000000002A0A50 "`r@"
 *   insn=0x00000000002A0A5C string=0x00000000002A0A60 "`"
 *   insn=0x00000000002A0A68 string=0x00000000002A0A6C "hB@"
 *   insn=0x00000000002A0A6C string=0x00000000002A0A70 "H"
 *   insn=0x00000000002A0A88 string=0x00000000002A0A8C "4"
 *   insn=0x00000000002A0A90 string=0x00000000002A0A94 ""
 *   insn=0x00000000002A0AA0 string=0x00000000002A0AA4 ""
 *   insn=0x00000000002A0AB4 string=0x00000000002A0AB8 "%"
 *   insn=0x00000000002A0AD0 string=0x00000000002A0AD4 "hN@"
 *   insn=0x00000000002A0AD4 string=0x00000000002A0AD8 ""
 *   insn=0x00000000002A0ADC string=0x00000000002A0AE0 "`""
 *   insn=0x00000000002A0ADC string=0x00000000002A0AF4 "`B@"
 *   insn=0x00000000002A0AE8 string=0x00000000002A0AEC "hN@"
 *   insn=0x00000000002A0AEC string=0x00000000002A0AF0 ""
 *   insn=0x00000000002A0AF8 string=0x00000000002A0AFC "`"
 *   insn=0x00000000002A0AF8 string=0x00000000002A0B10 ""
 *   insn=0x00000000002A0B04 string=0x00000000002A0B08 "`B@"
 *   insn=0x00000000002A0B08 string=0x00000000002A0B0C " "
 *   insn=0x00000000002A0B10 string=0x0000000000583734 "o"
 *   insn=0x00000000002A0B1C string=0x00000000002A0B20 "`r@"
 *   insn=0x00000000002A0B1C string=0x00000000002A0C10 ""
 *   insn=0x00000000002A0B24 string=0x00000000002A0B28 "`B"
 *   insn=0x00000000002A0B24 string=0x00000000002A0B38 ""
 *   insn=0x00000000002A0B30 string=0x00000000002A0B34 "`r@"
 *   insn=0x00000000002A0B38 string=0x00000000002A0B3C ""
 *   insn=0x00000000002A0B40 string=0x00000000002A0B44 "\t"
 *   insn=0x00000000002A0B44 string=0x00000000002A0B48 "`"
 *   insn=0x00000000002A0B48 string=0x00000000002A0B4C " ! "
 *   insn=0x00000000002A0B4C string=0x00000000002A0B50 "%"
 *   insn=0x00000000002A0B50 string=0x00000000002A0B54 "tN@"
 *   insn=0x00000000002A0B50 string=0x00000000002A0BF4 "`B@"
 *   insn=0x00000000002A0B54 string=0x00000000002A0B58 "t"
 *   insn=0x00000000002A0B58 string=0x00000000002A0B84 "`""
 *   insn=0x00000000002A0B60 string=0x00000000002A0B64 ""
 *   insn=0x00000000002A0B64 string=0x00000000002A0B68 "h"
 *   insn=0x00000000002A0B68 string=0x00000000002A0B6C """
 *   insn=0x00000000002A0B68 string=0x00000000002A0BB4 "h"
 *   insn=0x00000000002A0B8C string=0x00000000002A0B90 "tN@"
 *   insn=0x00000000002A0B94 string=0x00000000002A0B98 "h"
 *   insn=0x00000000002A0BA8 string=0x00000000002A0BAC ""
 *   insn=0x00000000002A0BAC string=0x00000000002A0BB0 "("
 *   insn=0x00000000002A0BBC string=0x00000000002A0BC0 "`"
 *   insn=0x00000000002A0BD0 string=0x00000000002A0BD4 "@"
 *   insn=0x00000000002A0BDC string=0x00000000002A0BE0 "h"
 *   insn=0x00000000002A0BDC string=0x00000000001F4FA0 "P'"
 *   insn=0x00000000002A0BF4 string=0x00000000002A0BF8 "i"
 *   insn=0x00000000002A0BFC string=0x00000000002A0C00 "`"
 *   insn=0x00000000002A0C08 string=0x00000000002A0C0C "`B@"
 *   insn=0x00000000002A0C14 string=0x00000000002A0C18 "e@"
 *   insn=0x00000000002A0C1C string=0x00000000002A0C20 "`N@"
 *   insn=0x00000000002A0C24 string=0x00000000002A0C28 "`""
 *   insn=0x00000000002A0C24 string=0x00000000002A0C38 ""
 *   insn=0x00000000002A0C30 string=0x00000000002A0C34 "`N@"
 *   insn=0x00000000002A0C50 string=0x00000000002A0C54 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::StaticMonsterControllerComponent::Prepare(Caver::StaticMonsterControllerComponent *this)
{
  __int64 v2; // x21
  _DWORD *result; // x0
  __int64 v4; // x0
  _DWORD *v5; // x20
  int v6; // w8
  int v7; // w8
  __int64 v8; // x8

  v2 = *((_QWORD *)this + 19);
  if ( v2
    || (result = (_DWORD *)Caver::ComponentOutletBase::Connect(
                             (Caver::StaticMonsterControllerComponent *)((char *)this + 136),
                             this),
        (v2 = *((_QWORD *)this + 19)) != 0) )
  {
    result = (_DWORD *)*((_QWORD *)this + 28);
    if ( !result )
    {
      Caver::ComponentOutletBase::Connect((Caver::StaticMonsterControllerComponent *)((char *)this + 208), this);
      result = (_DWORD *)*((_QWORD *)this + 28);
      if ( !result )
        goto LABEL_16;
      v2 = *((_QWORD *)this + 19);
      if ( !v2 )
      {
        Caver::ComponentOutletBase::Connect((Caver::StaticMonsterControllerComponent *)((char *)this + 136), this);
        result = (_DWORD *)*((_QWORD *)this + 28);
        v2 = *((_QWORD *)this + 19);
        if ( !result )
        {
          Caver::ComponentOutletBase::Connect((Caver::StaticMonsterControllerComponent *)((char *)this + 208), this);
          result = (_DWORD *)*((_QWORD *)this + 28);
        }
      }
    }
    v4 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 264LL))(result);
    v5 = (_DWORD *)v4;
    if ( v4 )
      *(_DWORD *)(v4 + 8) += 2;
    result = *(_DWORD **)(v2 + 160);
    *(_QWORD *)(v2 + 160) = v5;
    if ( result )
    {
      v6 = result[2] - 1;
      result[2] = v6;
      if ( !v6 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)result + 8LL))(result);
    }
    if ( v5 )
    {
      v7 = v5[2] - 1;
      v5[2] = v7;
      if ( !v7 )
        result = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
LABEL_16:
  v8 = *((_QWORD *)this + 16);
  if ( v8
    || (result = (_DWORD *)Caver::ComponentOutletBase::Connect(
                             (Caver::StaticMonsterControllerComponent *)((char *)this + 112),
                             this),
        (v8 = *((_QWORD *)this + 16)) != 0) )
  {
    *(_BYTE *)(v8 + 236) = 0;
  }
  return result;
}

