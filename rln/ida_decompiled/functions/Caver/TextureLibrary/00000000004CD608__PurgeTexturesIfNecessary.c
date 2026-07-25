/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CD608
 * Mangled: _ZN5Caver14TextureLibrary24PurgeTexturesIfNecessaryEv
 * Demangled: Caver::TextureLibrary::PurgeTexturesIfNecessary(void)
 *
 * Callers: 1
 *   0x00000000001FD3C0  Caver::TextureLibrary::PurgeTexturesIfNecessary(void)
 *
 * Callees: 7
 *   0x00000000001F38F0  Caver::TextureLibrary::RefreshUnusedTexturesList(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7170  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000001FD3C0  Caver::TextureLibrary::PurgeTexturesIfNecessary(void)
 *   0x00000000001FDF40  Caver::Texture::TextureRetainCount(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 41
 *   insn=0x00000000004CD618 string=0x00000000004CD61C "U"
 *   insn=0x00000000004CD62C string=0x00000000004CD640 "h"
 *   insn=0x00000000004CD634 string=0x00000000004CD638 ""
 *   insn=0x00000000004CD644 string=0x00000000004CD648 "M"
 *   insn=0x00000000004CD648 string=0x00000000004CD64C "i"
 *   insn=0x00000000004CD64C string=0x00000000004CD650 "?"
 *   insn=0x00000000004CD654 string=0x00000000004CD674 "?"
 *   insn=0x00000000004CD65C string=0x00000000004CD660 "i"
 *   insn=0x00000000004CD65C string=0x00000000001F38F0 "P'"
 *   insn=0x00000000004CD660 string=0x00000000004CD664 "?"
 *   insn=0x00000000004CD664 string=0x00000000004CD668 "a"
 *   insn=0x00000000004CD668 string=0x00000000004CD66C ")"
 *   insn=0x00000000004CD674 string=0x00000000004CD678 "@"
 *   insn=0x00000000004CD67C string=0x00000000004CD680 "T"
 *   insn=0x00000000004CD680 string=0x00000000004CD6A8 "h*"
 *   insn=0x00000000004CD684 string=0x00000000004CD688 "h*"
 *   insn=0x00000000004CD694 string=0x00000000004CD698 ""
 *   insn=0x00000000004CD6AC string=0x00000000004CD6B0 "$"
 *   insn=0x00000000004CD6B0 string=0x00000000001FDF40 "0'"
 *   insn=0x00000000004CD6B4 string=0x00000000004CD6B8 "`"
 *   insn=0x00000000004CD6BC string=0x00000000004CD670 "i"
 *   insn=0x00000000004CD6C0 string=0x00000000004CD6C4 ""
 *   insn=0x00000000004CD6C8 string=0x00000000004CD6CC "!"
 *   insn=0x00000000004CD6D4 string=0x00000000004CD6D8 ""
 *   insn=0x00000000004CD6F4 string=0x00000000004CD6F8 "T"
 *   insn=0x00000000004CD6F4 string=0x00000000001F7170 "0'"
 *   insn=0x00000000004CD6FC string=0x00000000004CD700 ""
 *   insn=0x00000000004CD734 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004CD73C string=0x00000000004CD740 ""
 *   insn=0x00000000004CD74C string=0x00000000004CD750 "4"
 *   insn=0x00000000004CD754 string=0x00000000004CD758 ""
 *   insn=0x00000000004CD764 string=0x00000000004CD768 ""
 *   insn=0x00000000004CD774 string=0x00000000004CD778 "S"
 *   insn=0x00000000004CD77C string=0x00000000004CD780 "(8@"
 *   insn=0x00000000004CD780 string=0x00000000004CD784 "H"
 *   insn=0x00000000004CD784 string=0x00000000004CD78C "(H@"
 *   insn=0x00000000004CD78C string=0x00000000004CD790 "\t<@"
 *   insn=0x00000000004CD790 string=0x00000000004CD794 "("
 *   insn=0x00000000004CD794 string=0x00000000004CD798 "<"
 *   insn=0x00000000004CD798 string=0x00000000004CD79C "\t"
 *   insn=0x00000000004CD79C string=0x00000000001FD3C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextureLibrary::PurgeTexturesIfNecessary(__int64 this)
{
  __int64 v1; // x19
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x8
  Caver::Texture *v5; // x20
  Caver::Texture *v6; // t1
  int v7; // w9
  int v8; // w8
  int v9; // w8

  v1 = this;
  _ReadStatusReg(TPIDR_EL0);
LABEL_2:
  while ( *(_DWORD *)(v1 + 60) > *(_DWORD *)(v1 + 64) )
  {
    v3 = *(_QWORD *)(v1 + 72);
    v2 = *(_QWORD *)(v1 + 80);
    if ( v3 == v2 )
    {
      this = Caver::TextureLibrary::RefreshUnusedTexturesList((Caver::TextureLibrary *)v1);
      v3 = *(_QWORD *)(v1 + 72);
      v2 = *(_QWORD *)(v1 + 80);
      if ( v3 == v2 )
        break;
    }
    while ( v3 != v2 )
    {
      v6 = *(Caver::Texture **)(v2 - 8);
      v4 = v2 - 8;
      v5 = v6;
      if ( v6 )
      {
        v7 = *((_DWORD *)v5 + 2);
        *(_QWORD *)(v1 + 80) = v4;
        *((_DWORD *)v5 + 2) = v7;
        if ( !v7 )
          (*(void (__fastcall **)(Caver::Texture *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      else
      {
        *(_QWORD *)(v1 + 80) = v4;
      }
      this = Caver::Texture::TextureRetainCount(v5);
      if ( (_DWORD)this == 2 )
      {
        this = Caver::TextureLibrary::SetTextureForName();
        if ( v5 )
        {
          v9 = *((_DWORD *)v5 + 2) - 1;
          *((_DWORD *)v5 + 2) = v9;
          if ( !v9 )
            this = (*(__int64 (__fastcall **)(Caver::Texture *))(*(_QWORD *)v5 + 8LL))(v5);
        }
        goto LABEL_2;
      }
      if ( v5 )
      {
        v8 = *((_DWORD *)v5 + 2) - 1;
        *((_DWORD *)v5 + 2) = v8;
        if ( !v8 )
          this = (*(__int64 (__fastcall **)(Caver::Texture *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      v3 = *(_QWORD *)(v1 + 72);
      v2 = *(_QWORD *)(v1 + 80);
    }
  }
  return this;
}

