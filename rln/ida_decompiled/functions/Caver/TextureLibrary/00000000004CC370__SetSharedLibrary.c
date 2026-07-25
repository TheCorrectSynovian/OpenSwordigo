/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CC370
 * Mangled: _ZN5Caver14TextureLibrary16SetSharedLibraryEPS0_
 * Demangled: Caver::TextureLibrary::SetSharedLibrary(Caver::TextureLibrary*)
 *
 * Callers: 1
 *   0x00000000001FA160  Caver::TextureLibrary::SetSharedLibrary(Caver::TextureLibrary*)
 *
 * Callees: 4
 *   0x00000000001F3530  std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>> *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x00000000004CC394 string=0x00000000004CC398 "u"
 *   insn=0x00000000004CC398 string=0x00000000004CC39C ""
 *   insn=0x00000000004CC3A0 string=0x00000000004CC3A4 "A"
 *   insn=0x00000000004CC3A4 string=0x00000000004CC3A8 "h"
 *   insn=0x00000000004CC3AC string=0x00000000004CC3E4 "u"
 *   insn=0x00000000004CC3B4 string=0x00000000004CC3B8 "@"
 *   insn=0x00000000004CC3B8 string=0x00000000004CC3BC ""
 *   insn=0x00000000004CC3BC string=0x00000000004CC3C0 ""
 *   insn=0x00000000004CC3C4 string=0x00000000004CC3C8 ""
 *   insn=0x00000000004CC3C8 string=0x00000000004CC3CC ""
 *   insn=0x00000000004CC3DC string=0x00000000004CC3E0 "u&@"
 *   insn=0x00000000004CC3E4 string=0x00000000004CC3F0 "a"
 *   insn=0x00000000004CC3EC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004CC3F0 string=0x00000000004CC3F4 "`""
 *   insn=0x00000000004CC3F4 string=0x00000000004CC3F8 "N"
 *   insn=0x00000000004CC3F8 string=0x00000000001F3530 "P'"
 *   insn=0x00000000004CC41C string=0x00000000004CC420 "\t"
 *   insn=0x00000000004CC428 string=0x00000000004CC42C "h"
 *   insn=0x00000000004CC42C string=0x00000000004CC438 "a"
 *   insn=0x00000000004CC438 string=0x00000000004CC43C "`""
 *   insn=0x00000000004CC43C string=0x00000000004CC440 "<"
 *   insn=0x00000000004CC454 string=0x00000000004CC458 "H"
 *   insn=0x00000000004CC460 string=0x00000000004CC464 ""
 *   insn=0x00000000004CC464 string=0x00000000004CC468 "A"
 *   insn=0x00000000004CC468 string=0x00000000004CC46C ""
 *   insn=0x00000000004CC480 string=0x00000000004CC484 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TextureLibrary::SetSharedLibrary(Caver::TextureLibrary *this, Caver::TextureLibrary *a2)
{
  _QWORD *v2; // x19
  _QWORD *v4; // x21
  _QWORD *v5; // x23
  _DWORD *v6; // x0
  int v7; // w8

  v2 = (_QWORD *)qword_6EA038;
  if ( qword_6EA038 )
  {
    v4 = *(_QWORD **)(qword_6EA038 + 72);
    v5 = *(_QWORD **)(qword_6EA038 + 80);
    *(_QWORD *)qword_6EA038 = off_6D7DA0;
    if ( v4 != v5 )
    {
      do
      {
        v6 = (_DWORD *)*v4;
        if ( *v4 )
        {
          v7 = v6[2] - 1;
          v6[2] = v7;
          if ( !v7 )
            (*(void (__fastcall **)(_DWORD *, Caver::TextureLibrary *))(*(_QWORD *)v6 + 8LL))(v6, a2);
        }
        ++v4;
      }
      while ( v5 != v4 );
      v4 = (_QWORD *)v2[9];
    }
    if ( v4 )
      operator delete(v4);
    std::_Rb_tree<std::string,std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>,std::_Select1st<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::intrusive_ptr<Caver::Texture>>>>::_M_erase();
    operator delete(v2);
  }
  qword_6EA038 = (__int64)this;
}

