/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C173C
 * Mangled: _ZN5Caver13PlayerProfile23LoadFromProtobufMessageERKNS_5Proto13PlayerProfileEb
 * Demangled: Caver::PlayerProfile::LoadFromProtobufMessage(Caver::Proto::PlayerProfile const&,bool)
 *
 * Callers: 1
 *   0x0000000000202330  Caver::PlayerProfile::LoadFromProtobufMessage(Caver::Proto::PlayerProfile const&,bool)
 *
 * Callees: 4
 *   0x00000000001F4640  Caver::DateTime::LoadFromProtobufMessage(Caver::Proto::DateTime const&)
 *   0x00000000001F92B0  Caver::PlayerProfile::LoadGameStateFromProtobufMessage(Caver::Proto::GameState const&)
 *   0x00000000001FBFF0  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::operator[](std::string const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 26
 *   insn=0x00000000003C1758 string=0x00000000003C175C "`"
 *   insn=0x00000000003C1768 string=0x00000000003C176C "H"
 *   insn=0x00000000003C176C string=0x00000000003C1770 ")"
 *   insn=0x00000000003C1774 string=0x00000000003C1778 ")"
 *   insn=0x00000000003C1778 string=0x00000000003C177C "`"
 *   insn=0x00000000003C1780 string=0x00000000003C1784 ")"
 *   insn=0x00000000003C1784 string=0x00000000003C1788 "("
 *   insn=0x00000000003C1790 string=0x00000000001F4640 "P'"
 *   insn=0x00000000003C1794 string=0x00000000003C1798 "`"
 *   insn=0x00000000003C17A0 string=0x00000000003C17A4 "`""
 *   insn=0x00000000003C17A4 string=0x00000000003C17A8 "h"
 *   insn=0x00000000003C17AC string=0x00000000003C17B0 "h""
 *   insn=0x00000000003C17BC string=0x00000000003C17C0 "`B"
 *   insn=0x00000000003C17C8 string=0x00000000003C17CC "`b"
 *   insn=0x00000000003C17D4 string=0x00000000003C17D8 "`"
 *   insn=0x00000000003C17EC string=0x00000000003C17F0 "vB"
 *   insn=0x00000000003C17F8 string=0x00000000003C17FC "yw"
 *   insn=0x00000000003C1808 string=0x00000000001FBFF0 "0'"
 *   insn=0x00000000003C1820 string=0x00000000003C1824 "h"
 *   insn=0x00000000003C1824 string=0x00000000003C1828 "U"
 *   insn=0x00000000003C1828 string=0x00000000003C182C ")"
 *   insn=0x00000000003C1830 string=0x00000000003C1834 ")"
 *   insn=0x00000000003C183C string=0x00000000003C1840 ")"
 *   insn=0x00000000003C1840 string=0x00000000003C1844 "("
 *   insn=0x00000000003C184C string=0x00000000001F92B0 "0'"
 *   insn=0x00000000003C1850 string=0x00000000003C1854 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PlayerProfile::LoadFromProtobufMessage(
        Caver::PlayerProfile *this,
        const Caver::Proto::PlayerProfile *a2,
        char a3)
{
  const Caver::Proto::PlayerProfile *v6; // x8
  __int64 v7; // x23
  int v8; // w24
  _DWORD *v9; // x0
  const Caver::Proto::PlayerProfile *v10; // x8

  sub_56A6A8((char *)this + 32);
  if ( (*((_BYTE *)a2 + 168) & 2) != 0 )
  {
    if ( *((_QWORD *)a2 + 3) )
      v6 = a2;
    else
      v6 = (const Caver::Proto::PlayerProfile *)Caver::Proto::PlayerProfile::default_instance_;
    Caver::DateTime::LoadFromProtobufMessage(
      (Caver::PlayerProfile *)((char *)this + 40),
      *((const Caver::Proto::DateTime **)v6 + 3));
  }
  sub_56A6A8((char *)this + 48);
  *((_QWORD *)this + 7) = *((_QWORD *)a2 + 5);
  *((_QWORD *)this + 8) = *((_QWORD *)a2 + 6);
  sub_56A6A8((char *)this + 72);
  sub_56A6A8((char *)this + 80);
  sub_56A6A8((char *)this + 88);
  sub_56A6A8((char *)this + 96);
  if ( *((int *)a2 + 26) >= 1 )
  {
    v7 = 0;
    do
    {
      v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8 * v7) + 24LL);
      std::map<std::string,int>::operator[]();
      *v9 = v8;
      ++v7;
    }
    while ( v7 < *((int *)a2 + 26) );
  }
  *((_BYTE *)this + 192) = *((_BYTE *)a2 + 152);
  if ( (a3 & 1) != 0 )
  {
    if ( *((_QWORD *)a2 + 7) )
      v10 = a2;
    else
      v10 = (const Caver::Proto::PlayerProfile *)Caver::Proto::PlayerProfile::default_instance_;
    Caver::PlayerProfile::LoadGameStateFromProtobufMessage(this, *((const Caver::Proto::GameState **)v10 + 7));
  }
  *((_BYTE *)this + 104) = 1;
}

