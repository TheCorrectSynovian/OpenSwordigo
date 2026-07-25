/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000045DD08
 * Mangled: _ZN5Caver13ObjectLibrary13RemoveTextureEPNS_7TextureE
 * Demangled: Caver::ObjectLibrary::RemoveTexture(Caver::Texture *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 26
 *   insn=0x000000000045DD18 string=0x000000000045DD1C "t"E"
 *   insn=0x000000000045DD24 string=0x000000000045DD28 "\t!"
 *   insn=0x000000000045DD2C string=0x000000000045DD30 "K"
 *   insn=0x000000000045DD38 string=0x000000000045DD4C "?"
 *   insn=0x000000000045DD40 string=0x000000000045DD44 "a"
 *   insn=0x000000000045DD44 string=0x000000000045DD48 "%"
 *   insn=0x000000000045DD4C string=0x000000000045DD50 "`"
 *   insn=0x000000000045DD50 string=0x000000000045DDBC "\t!"
 *   insn=0x000000000045DD54 string=0x000000000045DD58 "\t"
 *   insn=0x000000000045DD58 string=0x000000000045DD5C "?"
 *   insn=0x000000000045DD60 string=0x000000000045DD64 "("
 *   insn=0x000000000045DD70 string=0x000000000045DD74 "\t\t@"
 *   insn=0x000000000045DD74 string=0x000000000045DD78 ")"
 *   insn=0x000000000045DD78 string=0x000000000045DD7C "\t\t"
 *   insn=0x000000000045DD88 string=0x000000000045DD8C "@"
 *   insn=0x000000000045DD8C string=0x000000000045DD90 ""
 *   insn=0x000000000045DD90 string=0x000000000045DD94 ""
 *   insn=0x000000000045DD98 string=0x000000000045DD9C ""
 *   insn=0x000000000045DD9C string=0x000000000045DDA0 ""
 *   insn=0x000000000045DDB4 string=0x000000000045DDB8 "h.@"
 *   insn=0x000000000045DDBC string=0x000000000045DDC0 "i."
 *   insn=0x000000000045DDC8 string=0x000000000045DDCC "@"
 *   insn=0x000000000045DDCC string=0x000000000045DDD0 ""
 *   insn=0x000000000045DDD0 string=0x000000000045DDD4 ""
 *   insn=0x000000000045DDD8 string=0x000000000045DDEC ""
 *   insn=0x000000000045DDFC string=0x000000000045DE00 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ObjectLibrary::RemoveTexture(__int64 this, Caver::Texture *a2)
{
  __int64 v2; // x19
  Caver::Texture **v3; // x8
  Caver::Texture **v4; // x20
  Caver::Texture **v5; // x10
  Caver::Texture *v6; // t1
  __int64 v7; // x9
  __int64 v8; // x21
  Caver::Texture *v9; // x8
  Caver::Texture *v10; // x0
  int v11; // w8
  int v12; // w8

  v2 = this;
  v4 = *(Caver::Texture ***)(this + 80);
  v3 = *(Caver::Texture ***)(this + 88);
  if ( v4 != v3 )
  {
    v5 = *(Caver::Texture ***)(this + 80);
    while ( 1 )
    {
      v6 = *v5++;
      if ( v6 == a2 )
        break;
      v4 = v5;
      if ( v3 == v5 )
        return this;
    }
    if ( v3 - 1 != v4 )
    {
      v7 = (char *)v3 - (char *)(v4 + 1);
      if ( v7 >= 1 )
      {
        v8 = ((unsigned __int64)v7 >> 3) + 1;
        do
        {
          v9 = v4[1];
          if ( v9 )
            ++*((_DWORD *)v9 + 2);
          v10 = *v4;
          *v4 = v9;
          if ( v10 )
          {
            v11 = *((_DWORD *)v10 + 2) - 1;
            *((_DWORD *)v10 + 2) = v11;
            if ( !v11 )
              (*(void (__fastcall **)(Caver::Texture *))(*(_QWORD *)v10 + 8LL))(v10);
          }
          --v8;
          ++v4;
        }
        while ( v8 > 1 );
        v3 = *(Caver::Texture ***)(v2 + 88);
      }
    }
    *(_QWORD *)(v2 + 88) = v3 - 1;
    this = (__int64)*(v3 - 1);
    if ( this )
    {
      v12 = *(_DWORD *)(this + 8) - 1;
      *(_DWORD *)(this + 8) = v12;
      if ( !v12 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 8LL))(this);
    }
  }
  return this;
}

