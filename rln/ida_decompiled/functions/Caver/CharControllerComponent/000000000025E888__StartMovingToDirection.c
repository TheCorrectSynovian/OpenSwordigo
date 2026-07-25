/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025E888
 * Mangled: _ZN5Caver23CharControllerComponent22StartMovingToDirectionEi
 * Demangled: Caver::CharControllerComponent::StartMovingToDirection(int)
 *
 * Callers: 2
 *   0x00000000001F39A0  Caver::CharControllerComponent::StartMovingToDirection(int)
 *   0x000000000025E468  Caver::CharControllerComponent::Die(void)
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8CF0  Caver::CharAnimControllerComponent::StartMoving(void)
 *
 * Referenced strings: 43
 *   insn=0x000000000025E894 string=0x000000000025E898 "h:B"
 *   insn=0x000000000025E8A4 string=0x000000000025E8A8 "("
 *   insn=0x000000000025E8A4 string=0x000000000025E920 "`"
 *   insn=0x000000000025E8A8 string=0x000000000025E8AC "`>B"
 *   insn=0x000000000025E8B4 string=0x000000000025E8B8 "E"
 *   insn=0x000000000025E8B8 string=0x000000000025E8BC "("
 *   insn=0x000000000025E8BC string=0x000000000025E8C0 "`BB"
 *   insn=0x000000000025E8CC string=0x000000000025E8D0 "h"
 *   insn=0x000000000025E8D0 string=0x000000000025E8D4 "h"
 *   insn=0x000000000025E8D4 string=0x000000000025E8D8 "hB@"
 *   insn=0x000000000025E8DC string=0x000000000025E8E0 "`"
 *   insn=0x000000000025E8DC string=0x000000000025E8F0 ")"
 *   insn=0x000000000025E8E4 string=0x000000000025E8E8 "~d"
 *   insn=0x000000000025E8E8 string=0x000000000025E8EC "hB@"
 *   insn=0x000000000025E8E8 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000025E8F4 string=0x000000000025E8F8 "!5D"
 *   insn=0x000000000025E904 string=0x000000000025E908 "  "
 *   insn=0x000000000025E90C string=0x000000000025E910 "AB9h"
 *   insn=0x000000000025E910 string=0x000000000025E914 "h"
 *   insn=0x000000000025E918 string=0x000000000025E91C "h"
 *   insn=0x000000000025E920 string=0x000000000025E924 "t2"
 *   insn=0x000000000025E928 string=0x000000000025E92C "`N@"
 *   insn=0x000000000025E930 string=0x000000000025E934 "`""
 *   insn=0x000000000025E930 string=0x000000000025E948 "@"
 *   insn=0x000000000025E938 string=0x000000000025E93C "id"
 *   insn=0x000000000025E93C string=0x000000000025E940 "`N@"
 *   insn=0x000000000025E944 string=0x000000000025E954 "h"
 *   insn=0x000000000025E948 string=0x000000000025E94C ""
 *   insn=0x000000000025E94C string=0x000000000025E950 ""
 *   insn=0x000000000025E954 string=0x000000000025E958 "`"
 *   insn=0x000000000025E958 string=0x000000000025E95C "H"
 *   insn=0x000000000025E95C string=0x000000000025E960 "\t\t@"
 *   insn=0x000000000025E95C string=0x000000000025E984 "@"
 *   insn=0x000000000025E960 string=0x000000000025E964 ")"
 *   insn=0x000000000025E964 string=0x000000000025E968 "\t\t"
 *   insn=0x000000000025E96C string=0x000000000025E970 "\t"
 *   insn=0x000000000025E974 string=0x000000000025E978 ")"
 *   insn=0x000000000025E978 string=0x000000000025E97C " "
 *   insn=0x000000000025E97C string=0x000000000025E980 "`"
 *   insn=0x000000000025E984 string=0x000000000025E98C "h2B"
 *   insn=0x000000000025E988 string=0x00000000001F8CF0 "0'"
 *   insn=0x000000000025E990 string=0x000000000025E994 "i"
 *   insn=0x000000000025E998 string=0x000000000025E99C "h:"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::CharAnimControllerComponent *__fastcall Caver::CharControllerComponent::StartMovingToDirection(
        Caver::CharControllerComponent *this,
        int a2)
{
  __int64 v4; // x8
  Caver::CharAnimControllerComponent *result; // x0
  _DWORD *v6; // x8
  int v7; // w9
  unsigned int v8; // w8

  if ( *((_DWORD *)this + 142) == a2
    && *((float *)this + 143) < 0.3
    && *((float *)this + 144) < 0.2
    && !*((_DWORD *)this + 180) )
  {
    v4 = *((_QWORD *)this + 16);
    if ( !v4 )
    {
      Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 112), this);
      v4 = *((_QWORD *)this + 16);
    }
    if ( *(float *)(v4 + 128) < 0.1 && *(float *)(v4 + 140) > 0.0 && !*(_BYTE *)(v4 + 144) )
      *((_BYTE *)this + 580) = 1;
  }
  result = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 50);
  *((_DWORD *)this + 140) = a2;
  if ( result )
    goto LABEL_19;
  result = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 19);
  if ( result
    || (Caver::ComponentOutletBase::Connect((Caver::CharControllerComponent *)((char *)this + 136), this),
        (result = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 19)) != 0) )
  {
    ++*((_DWORD *)result + 2);
  }
  v6 = (_DWORD *)*((_QWORD *)this + 50);
  *((_QWORD *)this + 50) = result;
  if ( v6 )
  {
    v7 = v6[2] - 1;
    v6[2] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_DWORD *__return_ptr, _DWORD *))(*(_QWORD *)v6 + 8LL))(v6, v6);
      result = (Caver::CharAnimControllerComponent *)*((_QWORD *)this + 50);
    }
  }
  if ( result )
LABEL_19:
    result = (Caver::CharAnimControllerComponent *)Caver::CharAnimControllerComponent::StartMoving(result);
  v8 = *((_DWORD *)this + 140);
  *((_BYTE *)this + 564) = 1;
  *((_QWORD *)this + 71) = v8;
  return result;
}

