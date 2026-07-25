/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000495A74
 * Mangled: _ZN5Caver9GUIButton8SetTitleERKSs
 * Demangled: Caver::GUIButton::SetTitle(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FC220  Caver::GUIButton::SetTitle(std::string const&)
 *
 * Callees: 4
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F6B30  Caver::GUIButton::titleLabel(void)
 *   0x00000000001F8510  Caver::GUILabel::UpdateText(void)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 13
 *   insn=0x0000000000495A80 string=0x0000000000495A84 "h"
 *   insn=0x0000000000495A88 string=0x0000000000495A8C ""
 *   insn=0x0000000000495A8C string=0x0000000000495A90 "h"
 *   insn=0x0000000000495A94 string=0x0000000000495A98 "&"
 *   insn=0x0000000000495A98 string=0x00000000001F6B30 "0'"
 *   insn=0x0000000000495A9C string=0x0000000000495AA0 "`"
 *   insn=0x0000000000495AA8 string=0x0000000000495AAC "("
 *   insn=0x0000000000495AAC string=0x0000000000495AB0 "_"
 *   insn=0x0000000000495AB0 string=0x0000000000495AB4 "a"
 *   insn=0x0000000000495AB8 string=0x00000000001F5190 "P'"
 *   insn=0x0000000000495AD8 string=0x00000000001F8510 "0'"
 *   insn=0x0000000000495AE0 string=0x0000000000495AE4 ""
 *   insn=0x0000000000495AE4 string=0x0000000000495AE8 "=@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIButton::SetTitle(Caver::GUIButton *this, const void **a2)
{
  Caver::GUILabel *v4; // x0
  Caver::GUILabel *v5; // x20
  _QWORD *v6; // x1
  size_t v7; // x2
  __int64 result; // x0

  if ( *((_QWORD *)*a2 - 3) )
  {
    Caver::GUIButton::titleLabel(this);
    v5 = v4;
    v6 = (_QWORD *)*((_QWORD *)v4 + 32);
    v7 = *((_QWORD *)*a2 - 3);
    if ( v7 != *(v6 - 3) || (result = memcmp(*a2, v6, v7), (_DWORD)result) )
    {
      sub_56A6A8((char *)v5 + 256);
      return Caver::GUILabel::UpdateText(v5);
    }
  }
  else
  {
    result = *((_QWORD *)this + 40);
    if ( result )
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 120LL))(result);
      *((_QWORD *)this + 40) = 0;
    }
  }
  return result;
}

