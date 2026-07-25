/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000447094
 * Mangled: _ZN5Caver11MeshBuilder12GenerateMeshEv
 * Demangled: Caver::MeshBuilder::GenerateMesh(void)
 *
 * Callers: 1
 *   0x00000000001F44E0  Caver::MeshBuilder::GenerateMesh(void)
 *
 * Callees: 2
 *   0x00000000001F6250  Caver::Mesh::CreateInterleavedData(int,int,int)
 *   0x00000000001F6A50  Caver::Mesh::UpdateBoundingBox(void)
 *
 * Referenced strings: 86
 *   insn=0x00000000004470A0 string=0x00000000004470A4 "`"
 *   insn=0x00000000004470A4 string=0x00000000004470A8 "a"
 *   insn=0x00000000004470A8 string=0x00000000004470AC "bR@"
 *   insn=0x00000000004470AC string=0x00000000004470B0 "c2@"
 *   insn=0x00000000004470B0 string=0x00000000004470B4 "g"
 *   insn=0x00000000004470B4 string=0x00000000004470B8 "`"
 *   insn=0x00000000004470B4 string=0x00000000001F6250 "0'"
 *   insn=0x00000000004470C4 string=0x00000000004470C8 "h"
 *   insn=0x00000000004470C4 string=0x0000000000447134 "\n<@"
 *   insn=0x00000000004470CC string=0x00000000004470D0 "+"
 *   insn=0x00000000004470D0 string=0x00000000004470D4 "j"
 *   insn=0x00000000004470D4 string=0x00000000004470D8 ""
 *   insn=0x00000000004470E8 string=0x00000000004470EC "a"
 *   insn=0x00000000004470F0 string=0x00000000004470F4 "+"
 *   insn=0x00000000004470FC string=0x0000000000447100 "Oil"
 *   insn=0x0000000000447104 string=0x0000000000447108 "oi,"
 *   insn=0x0000000000447110 string=0x0000000000447114 "K"
 *   insn=0x0000000000447118 string=0x000000000044711C ")"
 *   insn=0x000000000044711C string=0x0000000000447120 "?"
 *   insn=0x0000000000447120 string=0x0000000000447124 "J"
 *   insn=0x0000000000447124 string=0x0000000000447128 "k"
 *   insn=0x000000000044712C string=0x0000000000447130 "`"
 *   insn=0x0000000000447134 string=0x0000000000447138 "_"
 *   insn=0x000000000044713C string=0x0000000000447140 "h"
 *   insn=0x000000000044713C string=0x00000000004471B0 "\n\@"
 *   insn=0x0000000000447144 string=0x0000000000447148 "K"
 *   insn=0x0000000000447148 string=0x000000000044714C "l"
 *   insn=0x000000000044714C string=0x0000000000447150 "$@"
 *   insn=0x0000000000447164 string=0x0000000000447168 "a"
 *   insn=0x0000000000447168 string=0x000000000044716C "_"
 *   insn=0x000000000044716C string=0x0000000000447170 "+"
 *   insn=0x0000000000447180 string=0x0000000000447184 "oi*"
 *   insn=0x0000000000447184 string=0x0000000000447188 "\n<"
 *   insn=0x000000000044718C string=0x0000000000447190 "K"
 *   insn=0x0000000000447194 string=0x0000000000447198 ")"
 *   insn=0x0000000000447198 string=0x000000000044719C "?"
 *   insn=0x00000000004471A0 string=0x00000000004471A4 "k"
 *   insn=0x00000000004471A8 string=0x00000000004471AC "`"
 *   insn=0x00000000004471B0 string=0x00000000004471B4 "_"
 *   insn=0x00000000004471B8 string=0x00000000004471BC "h"
 *   insn=0x00000000004471B8 string=0x0000000000447228 "@A"
 *   insn=0x00000000004471C0 string=0x00000000004471C4 "+"
 *   insn=0x00000000004471C4 string=0x00000000004471C8 "l"
 *   insn=0x00000000004471C8 string=0x00000000004471CC "4@"
 *   insn=0x00000000004471D0 string=0x00000000004471D4 "-"
 *   insn=0x00000000004471E0 string=0x00000000004471E4 "A"
 *   insn=0x00000000004471E4 string=0x00000000004471E8 "_"
 *   insn=0x00000000004471E8 string=0x00000000004471EC ""
 *   insn=0x00000000004471F4 string=0x00000000004471F8 "ji.8\n\"
 *   insn=0x00000000004471F8 string=0x00000000004471FC "\n\"
 *   insn=0x0000000000447204 string=0x0000000000447208 "k"
 *   insn=0x000000000044720C string=0x0000000000447210 ")"
 *   insn=0x0000000000447210 string=0x0000000000447214 "?"
 *   insn=0x0000000000447218 string=0x000000000044721C "k"
 *   insn=0x0000000000447220 string=0x0000000000447224 "`"
 *   insn=0x000000000044722C string=0x0000000000447230 "+"
 *   insn=0x0000000000447230 string=0x00000000004472D4 ""
 *   insn=0x000000000044723C string=0x0000000000447240 "k"
 *   insn=0x0000000000447248 string=0x000000000044724C "m"
 *   insn=0x0000000000447248 string=0x00000000004472C4 "@"
 *   insn=0x0000000000447258 string=0x000000000044725C "9\t"
 *   insn=0x0000000000447270 string=0x0000000000447274 "_"
 *   insn=0x0000000000447278 string=0x00000000004472A8 "2"
 *   insn=0x000000000044727C string=0x0000000000447280 "_"
 *   insn=0x0000000000447280 string=0x0000000000447284 "+"
 *   insn=0x0000000000447288 string=0x000000000044728C "@"
 *   insn=0x0000000000447290 string=0x0000000000447294 "R"
 *   insn=0x000000000044729C string=0x00000000004472A0 "_"
 *   insn=0x00000000004472A0 string=0x00000000004472A4 "K"
 *   insn=0x00000000004472BC string=0x00000000004472C0 "`"
 *   insn=0x00000000004472C4 string=0x00000000004472C8 ""
 *   insn=0x00000000004472D8 string=0x00000000004472DC "m"
 *   insn=0x00000000004472DC string=0x00000000004472E0 "h2@"
 *   insn=0x00000000004472E4 string=0x00000000004472E8 ""
 *   insn=0x00000000004472E8 string=0x00000000004472EC "j"
 *   insn=0x00000000004472F4 string=0x00000000004472F8 "m"
 *   insn=0x0000000000447300 string=0x0000000000447304 "A"
 *   insn=0x0000000000447308 string=0x000000000044730C ""
 *   insn=0x0000000000447310 string=0x0000000000447314 "Kyn"
 *   insn=0x0000000000447318 string=0x000000000044731C ""
 *   insn=0x0000000000447324 string=0x0000000000447328 "k"
 *   insn=0x000000000044732C string=0x0000000000447330 ")"
 *   insn=0x0000000000447330 string=0x0000000000447334 "?"
 *   insn=0x0000000000447334 string=0x0000000000447338 "J"
 *   insn=0x0000000000447340 string=0x0000000000447344 "`"
 *   insn=0x0000000000447348 string=0x00000000001F6A50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::MeshBuilder *__fastcall Caver::MeshBuilder::GenerateMesh(Caver::MeshBuilder *this)
{
  Caver::Mesh *v2; // x0
  __int64 v3; // x12
  int v4; // w8
  __int64 v5; // x10
  __int64 v6; // x11
  int i; // w9
  __int64 v8; // x14
  __int64 v9; // x12
  int v10; // w15
  __int64 v11; // x10
  int v12; // w8
  __int64 v13; // x11
  int v14; // w9
  __int64 v15; // x12
  __int64 v16; // x14
  __int64 v17; // x10
  int v18; // w15
  __int64 v19; // x10
  int v20; // w8
  __int64 v21; // x11
  int v22; // w9
  __int64 v23; // x12
  __int64 v24; // x14
  __int64 v25; // x8
  int v26; // w11
  int v27; // w12
  __int64 v28; // x13
  __int64 v29; // x14
  __int64 v30; // x15
  int *v31; // x16
  __int64 v32; // x18
  __int64 v33; // x0
  int v34; // w1
  __int64 v35; // x11
  int v36; // w8
  __int64 v37; // x10
  __int64 v38; // x12
  int j; // w9
  __int64 v40; // x14

  Caver::Mesh::CreateInterleavedData(
    *(Caver::Mesh **)this,
    *((_DWORD *)this + 4),
    *((_DWORD *)this + 20),
    *((_DWORD *)this + 12));
  v2 = *(Caver::Mesh **)this;
  LODWORD(v3) = *(_DWORD *)(*(_QWORD *)this + 36LL);
  if ( (int)v3 >= 1 )
  {
    v4 = *((_DWORD *)this + 4);
    if ( v4 >= 1 )
    {
      v5 = *((_QWORD *)this + 3);
      v6 = *((_QWORD *)v2 + 6);
      for ( i = 0; i != v4; ++i )
      {
        if ( *((_DWORD *)v2 + 8) == 5126 && (int)v3 >= 1 )
        {
          v8 = 0;
          do
          {
            v9 = 4 * v8;
            v10 = *(_DWORD *)(v5 + 4 * v8++);
            *(_DWORD *)(v6 + v9) = v10;
            v3 = *((int *)v2 + 9);
          }
          while ( v8 < v3 );
        }
        v5 += 68;
        v6 += *((unsigned int *)v2 + 10);
      }
      v2 = *(Caver::Mesh **)this;
    }
  }
  LODWORD(v11) = *((_DWORD *)v2 + 15);
  if ( (int)v11 >= 1 )
  {
    v12 = *((_DWORD *)this + 4);
    if ( v12 >= 1 )
    {
      v13 = *((_QWORD *)v2 + 9);
      v14 = 0;
      v15 = *((_QWORD *)this + 3) + 16LL;
      do
      {
        if ( *((_DWORD *)v2 + 14) == 5126 && (int)v11 >= 1 )
        {
          v16 = 0;
          do
          {
            v17 = 4 * v16;
            v18 = *(_DWORD *)(v15 + 4 * v16++);
            *(_DWORD *)(v13 + v17) = v18;
            v11 = *((int *)v2 + 15);
          }
          while ( v16 < v11 );
        }
        ++v14;
        v15 += 68;
        v13 += *((unsigned int *)v2 + 16);
      }
      while ( v14 != v12 );
      v2 = *(Caver::Mesh **)this;
    }
  }
  LODWORD(v19) = *((_DWORD *)v2 + 23);
  if ( (int)v19 >= 1 )
  {
    v20 = *((_DWORD *)this + 4);
    if ( v20 >= 1 )
    {
      v21 = *((_QWORD *)v2 + 13);
      v22 = 0;
      v23 = *((_QWORD *)this + 3) + 32LL;
      do
      {
        if ( *((_DWORD *)v2 + 22) == 5121 && (int)v19 >= 1 )
        {
          v24 = 0;
          do
          {
            *(_BYTE *)(v21 + v24) = *(_BYTE *)(v23 + v24);
            v19 = *((int *)v2 + 23);
            ++v24;
          }
          while ( v24 < v19 );
        }
        ++v22;
        v23 += 68;
        v21 += *((unsigned int *)v2 + 24);
      }
      while ( v22 != v20 );
      v2 = *(Caver::Mesh **)this;
    }
  }
  if ( *((int *)v2 + 80) >= 1 )
  {
    v25 = 0;
    do
    {
      v26 = *((_DWORD *)this + 4);
      if ( v26 >= 1 )
      {
        v27 = 0;
        v28 = *((_QWORD *)v2 + 10) + 24 * v25;
        v29 = *(_QWORD *)(v28 + 16);
        v30 = *((_QWORD *)this + 3) + 16 * v25 + 36;
        v31 = (int *)(v28 + 4);
        do
        {
          if ( *(_DWORD *)v28 == 5126 && *v31 >= 1 )
          {
            v32 = 0;
            do
            {
              v33 = 4 * v32;
              v34 = *(_DWORD *)(v30 + 4 * v32++);
              *(_DWORD *)(v29 + v33) = v34;
            }
            while ( v32 < *v31 );
          }
          ++v27;
          v30 += 68;
          v29 += *(unsigned int *)(v28 + 8);
        }
        while ( v27 != v26 );
        v2 = *(Caver::Mesh **)this;
      }
      ++v25;
    }
    while ( v25 < *((int *)v2 + 80) );
  }
  LODWORD(v35) = *((_DWORD *)v2 + 3);
  if ( (int)v35 > 0 )
  {
    v36 = *((_DWORD *)this + 12);
    if ( v36 >= 1 )
    {
      v37 = *((_QWORD *)this + 7);
      v38 = *((_QWORD *)v2 + 3);
      for ( j = 0; j != v36; ++j )
      {
        if ( *((_DWORD *)v2 + 2) == 5123 && (int)v35 >= 1 )
        {
          v40 = 0;
          do
          {
            *(_WORD *)(v38 + 2 * v40) = *(_DWORD *)(v37 + 4 * v40);
            v35 = *((int *)v2 + 3);
            ++v40;
          }
          while ( v40 < v35 );
        }
        v37 += 4;
        v38 += *((unsigned int *)v2 + 4);
      }
      v2 = *(Caver::Mesh **)this;
    }
  }
  Caver::Mesh::UpdateBoundingBox(v2);
  return this;
}

