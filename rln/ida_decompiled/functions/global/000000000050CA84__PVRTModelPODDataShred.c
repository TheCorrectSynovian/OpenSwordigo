/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050CA84
 * Mangled: _Z21PVRTModelPODDataShredR8CPODDatajPKi
 * Demangled: PVRTModelPODDataShred(CPODData &,uint,int const*)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F89E0  .free
 *   0x00000000001F9340  PVRTVertexRead(PVRTVECTOR4f *,void const*,EPVRTDataType,int)
 *   0x00000000001FBC40  .memset
 *   0x00000000001FEAA0  PVRTVertexWrite(void *,EPVRTDataType,int,PVRTVECTOR4f const*)
 *
 * Referenced strings: 69
 *   insn=0x000000000050CAA0 string=0x000000000050CAA4 "X"
 *   insn=0x000000000050CAA4 string=0x000000000050CAA8 ""
 *   insn=0x000000000050CABC string=0x000000000050CAC0 "u\n@"
 *   insn=0x000000000050CABC string=0x000000000050CD50 ""
 *   insn=0x000000000050CAC0 string=0x000000000050CAC4 "u"
 *   insn=0x000000000050CAC4 string=0x000000000050CAC8 "v^@)"
 *   insn=0x000000000050CAD0 string=0x000000000050CAD4 "h\n@"
 *   insn=0x000000000050CAE0 string=0x000000000050CAE4 "h"
 *   insn=0x000000000050CAE8 string=0x000000000050CAEC "?"
 *   insn=0x000000000050CAEC string=0x000000000050CAF0 "+U"
 *   insn=0x000000000050CAF0 string=0x000000000050CAF4 "{"
 *   insn=0x000000000050CAF4 string=0x000000000050CAF8 "\n"
 *   insn=0x000000000050CAFC string=0x000000000050CB00 "h"
 *   insn=0x000000000050CB04 string=0x000000000050CB08 "_"
 *   insn=0x000000000050CB08 string=0x000000000050CB0C "LU"
 *   insn=0x000000000050CB10 string=0x000000000050CB14 "J}"
 *   insn=0x000000000050CB18 string=0x000000000050CB1C "+"
 *   insn=0x000000000050CB20 string=0x000000000050CB24 "h"
 *   insn=0x000000000050CB2C string=0x000000000050CB30 "lU"
 *   insn=0x000000000050CB34 string=0x000000000050CB38 "k}"
 *   insn=0x000000000050CB3C string=0x000000000050CB40 "J"
 *   insn=0x000000000050CB40 string=0x000000000050CB44 "_"
 *   insn=0x000000000050CB44 string=0x000000000050CB48 "H}"
 *   insn=0x000000000050CB48 string=0x000000000050CB4C "JU"
 *   insn=0x000000000050CB4C string=0x000000000050CB50 "J"
 *   insn=0x000000000050CB58 string=0x000000000050CB5C "J}@"
 *   insn=0x000000000050CB5C string=0x000000000050CB60 "h"
 *   insn=0x000000000050CB64 string=0x000000000050CB68 "\t"
 *   insn=0x000000000050CB8C string=0x000000000050CB90 ")}"
 *   insn=0x000000000050CB94 string=0x000000000050CB98 "i"
 *   insn=0x000000000050CB9C string=0x000000000050CBA0 "w"
 *   insn=0x000000000050CBA4 string=0x000000000050CBA8 "?5"
 *   insn=0x000000000050CBAC string=0x000000000050CBB0 "j"
 *   insn=0x000000000050CBB0 string=0x000000000050CBB8 "I"
 *   insn=0x000000000050CBBC string=0x000000000050CBC4 "}\th\n"
 *   insn=0x000000000050CBC4 string=0x000000000050CBC8 "h\n"
 *   insn=0x000000000050CBD8 string=0x000000000050CBDC "`\n"
 *   insn=0x000000000050CBD8 string=0x00000000001F5E70 "P'"
 *   insn=0x000000000050CBE8 string=0x000000000050CBEC "}@"
 *   insn=0x000000000050CBF4 string=0x000000000050CBF8 "{"
 *   insn=0x000000000050CC00 string=0x000000000050CC04 "(}@"
 *   insn=0x000000000050CC20 string=0x00000000001F9340 "0'"
 *   insn=0x000000000050CC24 string=0x000000000050CC28 ""
 *   insn=0x000000000050CC28 string=0x000000000050CC2C "@{{"
 *   insn=0x000000000050CC44 string=0x000000000050CC48 "h"
 *   insn=0x000000000050CC4C string=0x000000000050CC50 "@{h"
 *   insn=0x000000000050CC70 string=0x000000000050CC74 "@{h"
 *   insn=0x000000000050CC94 string=0x000000000050CC98 "@{h"
 *   insn=0x000000000050CCB0 string=0x000000000050CCE0 "h"
 *   insn=0x000000000050CCC8 string=0x000000000050CCCC " "
 *   insn=0x000000000050CCCC string=0x000000000050CCD0 ""
 *   insn=0x000000000050CCDC string=0x00000000001FBC40 "0'"
 *   insn=0x000000000050CCE0 string=0x000000000050CCE4 "a"
 *   insn=0x000000000050CCE4 string=0x000000000050CCE8 "j\n@"
 *   insn=0x000000000050CCE8 string=0x000000000050CCEC "+}"
 *   insn=0x000000000050CCEC string=0x000000000050CCF0 ")"
 *   insn=0x000000000050CCF0 string=0x000000000050CCF4 "?5"
 *   insn=0x000000000050CCF4 string=0x000000000050CCF8 "@"
 *   insn=0x000000000050CCFC string=0x000000000050CD00 "j"
 *   insn=0x000000000050CD00 string=0x000000000050CD08 "I"
 *   insn=0x000000000050CD0C string=0x000000000050CD14 ""}"
 *   insn=0x000000000050CD18 string=0x000000000050CD1C "a"
 *   insn=0x000000000050CD28 string=0x000000000050CD2C "9"
 *   insn=0x000000000050CD34 string=0x000000000050CD38 "*"
 *   insn=0x000000000050CD38 string=0x00000000001F89E0 "0'"
 *   insn=0x000000000050CD44 string=0x000000000050CD48 "&"
 *   insn=0x000000000050CD58 string=0x000000000050CD5C "!"
 *   insn=0x000000000050CD5C string=0x000000000050CD80 "T"
 *   insn=0x000000000050CD80 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall PVRTModelPODDataShred(CPODData *a1, int a2, int *a3)
{
  int v3; // w25
  int v4; // w27
  int v5; // w28
  void *v9; // x21
  int v10; // w22
  unsigned int v11; // w23
  int v12; // w9
  unsigned int v13; // w8
  int v14; // w10
  int v15; // w11
  int v16; // w11
  int v17; // w12
  int v18; // w10
  int v19; // w12
  unsigned int v20; // w8
  int v21; // w9
  int v22; // w8
  __int64 v23; // x8
  int v24; // w25
  __int64 v25; // x24
  __int64 v26; // x8
  float v27; // s0
  float v28; // s0
  float v29; // s0
  float v30; // s0
  char v31; // [xsp+14h] [xbp-ACh]
  __int64 v32; // [xsp+18h] [xbp-A8h]
  unsigned int v33; // [xsp+24h] [xbp-9Ch]
  __int64 v34; // [xsp+30h] [xbp-90h]
  unsigned int v35; // [xsp+3Ch] [xbp-84h]
  unsigned int v36; // [xsp+40h] [xbp-80h]
  int v37; // [xsp+44h] [xbp-7Ch]
  _DWORD v38[8]; // [xsp+48h] [xbp-78h] BYREF
  __int64 v39; // [xsp+68h] [xbp-58h]

  v39 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 )
  {
    v9 = (void *)*((_QWORD *)a1 + 2);
    if ( v9 )
    {
      v10 = *(_DWORD *)a1;
      v11 = *((_DWORD *)a1 + 1);
      *((_DWORD *)a1 + 1) = 0;
      v12 = *a3;
      v37 = *((_DWORD *)a1 + 2);
      if ( *a3 )
      {
        v13 = 1;
        *((_DWORD *)a1 + 1) = 1;
        v14 = a3[1];
        if ( v12 >= 0 )
          v15 = v12;
        else
          v15 = -v12;
        v4 = v15 - 120;
        if ( v14 )
        {
          v13 = 2;
          *((_DWORD *)a1 + 1) = 2;
          v16 = a3[2];
          if ( v14 >= 0 )
            v17 = v14;
          else
            v17 = -v14;
          v3 = v17 - 120;
          v35 = (unsigned int)v14 >> 31;
          if ( v16 )
          {
            v13 = 3;
            *((_DWORD *)a1 + 1) = 3;
            v18 = a3[3];
            if ( v16 >= 0 )
              v19 = v16;
            else
              v19 = -v16;
            v5 = v19 - 120;
            v33 = (unsigned int)v16 >> 31;
            if ( v18 )
            {
              v20 = (unsigned int)v18 >> 31;
              if ( v18 < 0 )
                v18 = -v18;
              v31 = v20;
              v13 = 4;
              *((_DWORD *)a1 + 1) = 4;
              v32 = v18 - 120;
            }
            else
            {
              v32 = 0;
            }
          }
          else
          {
            v32 = 0;
          }
        }
        else
        {
          v32 = 0;
        }
        v36 = (unsigned int)v12 >> 31;
        if ( v13 > v11 )
        {
          v13 = v11;
          *((_DWORD *)a1 + 1) = v11;
        }
      }
      else
      {
        v32 = 0;
        v13 = 0;
      }
      if ( (unsigned int)(v10 - 1) > 0xD )
        v21 = 0;
      else
        v21 = dword_59B7B0[v10 - 1];
      v22 = v13 * v21;
      *((_DWORD *)a1 + 2) = v22;
      if ( v22 )
      {
        *((_QWORD *)a1 + 2) = malloc((unsigned int)(v22 * a2));
        if ( a2 )
        {
          v23 = v3;
          v24 = 0;
          v25 = 0;
          v34 = v23;
          do
          {
            PVRTVertexRead();
            v26 = (unsigned int)*a3;
            if ( (_DWORD)v26 )
            {
              v27 = *(float *)&v38[v4 + 4];
              if ( (_BYTE)v36 )
                v27 = -v27;
              *(float *)v38 = v27;
              if ( a3[1] )
              {
                v28 = *(float *)&v38[v34 + 4];
                if ( (_BYTE)v35 )
                  v28 = -v28;
                *(float *)&v38[1] = v28;
                if ( a3[2] )
                {
                  v29 = *(float *)&v38[v5 + 4];
                  if ( (_BYTE)v33 )
                    v29 = -v29;
                  *(float *)&v38[2] = v29;
                  if ( a3[3] )
                  {
                    v30 = *(float *)&v38[v32 + 4];
                    if ( v31 )
                      v30 = -v30;
                    *(float *)&v38[3] = v30;
                    goto LABEL_48;
                  }
                  v26 = 12;
                }
                else
                {
                  v26 = 8;
                }
              }
              else
              {
                v26 = 4;
              }
            }
            memset((char *)v38 + v26, 0, ((unsigned int)v26 ^ 0xC) + 4);
LABEL_48:
            PVRTVertexWrite();
            ++v25;
            v24 += v37;
          }
          while ( a2 != v25 );
        }
        free(v9);
      }
      else
      {
        free(v9);
        *((_QWORD *)a1 + 2) = 0;
      }
    }
  }
}

