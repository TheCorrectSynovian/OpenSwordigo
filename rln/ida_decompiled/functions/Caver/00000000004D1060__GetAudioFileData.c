/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D1060
 * Mangled: _ZN5Caver16GetAudioFileDataERKSsPNS_11AudioBuffer12BufferFormatEPPvPiS7_
 * Demangled: Caver::GetAudioFileData(std::string const&,Caver::AudioBuffer::BufferFormat *,void **,int *,int *)
 *
 * Callers: 1
 *   0x00000000001FD210  Caver::GetAudioFileData(std::string const&,Caver::AudioBuffer::BufferFormat *,void **,int *,int *)
 *
 * Callees: 7
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F89E0  .free
 *   0x00000000001FAF40  .AAsset_read
 *   0x00000000001FDBA0  Caver::GetAndroidAssetManager(void)
 *   0x00000000002002F0  .AAssetManager_open
 *   0x0000000000201240  .AAsset_close
 *
 * Referenced strings: 19
 *   insn=0x00000000004D1078 string=0x00000000004D107C "Z"
 *   insn=0x00000000004D107C string=0x00000000004D1080 "H"
 *   insn=0x00000000004D109C string=0x00000000004D10A0 "a"
 *   insn=0x00000000004D109C string=0x00000000001FDBA0 "0'"
 *   insn=0x00000000004D10AC string=0x00000000004D10B0 "3"
 *   insn=0x00000000004D10C0 string=0x00000000001FAF40 "0'"
 *   insn=0x00000000004D10C4 string=0x00000000004D10C8 "A"
 *   insn=0x00000000004D10CC string=0x00000000004D10D0 "I*"
 *   insn=0x00000000004D1100 string=0x00000000004D1104 "a"
 *   insn=0x00000000004D1120 string=0x00000000004D1124 "S"
 *   insn=0x00000000004D1124 string=0x00000000001F5E70 "P'"
 *   insn=0x00000000004D1140 string=0x00000000004D1144 "!"
 *   insn=0x00000000004D1164 string=0x00000000004D1168 ""
 *   insn=0x00000000004D1178 string=0x00000000004D117C "1"
 *   insn=0x00000000004D1180 string=0x00000000004D1198 "H"
 *   insn=0x00000000004D118C string=0x00000000001F89E0 "0'"
 *   insn=0x00000000004D11A4 string=0x00000000004D1200 "4"
 *   insn=0x00000000004D11DC string=0x00000000004D11E0 ""
 *   insn=0x00000000004D1200 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GetAudioFileData(Caver *a1, int *a2, _QWORD *a3, int *a4, _DWORD *a5)
{
  AAssetManager *AndroidAssetManager; // x0
  AAsset *v11; // x0
  AAsset *v12; // x19
  size_t v13; // x25
  void *v14; // x24
  int v15; // w0
  int v16; // w8
  unsigned int v17; // w20
  _DWORD buf[5]; // [xsp+8h] [xbp-78h] BYREF
  __int16 v20; // [xsp+1Eh] [xbp-62h]
  int v21; // [xsp+20h] [xbp-60h]
  __int16 v22; // [xsp+2Ah] [xbp-56h]
  int v23; // [xsp+2Ch] [xbp-54h]
  size_t byte_count; // [xsp+30h] [xbp-50h]
  __int64 v25; // [xsp+38h] [xbp-48h]

  v25 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  AndroidAssetManager = (AAssetManager *)Caver::GetAndroidAssetManager(a1);
  v11 = AAssetManager_open(AndroidAssetManager, *(const char **)a1, 2);
  v12 = v11;
  if ( !v11 )
    return 0;
  if ( AAsset_read(v11, buf, 0x2Cu) == 44
    && buf[0] == 1179011410
    && buf[2] == 1163280727
    && buf[3] == 544501094
    && v23 == 1635017060 )
  {
    v13 = (unsigned int)byte_count;
    v14 = malloc((unsigned int)byte_count);
    v15 = AAsset_read(v12, v14, v13);
    if ( v15 == (_DWORD)byte_count )
    {
      if ( v22 == 16 )
      {
        if ( v20 == 1 )
          v16 = 2;
        else
          v16 = 4;
      }
      else
      {
        if ( v22 != 8 )
        {
LABEL_24:
          *a3 = v14;
          *a4 = v15;
          *a5 = v21;
          v17 = 1;
          goto LABEL_14;
        }
        if ( v20 == 1 )
          v16 = 1;
        else
          v16 = 3;
      }
      *a2 = v16;
      goto LABEL_24;
    }
    v17 = 0;
  }
  else
  {
    v17 = 0;
    v14 = 0;
  }
LABEL_14:
  AAsset_close(v12);
  if ( v14 && !v17 )
    free(v14);
  return v17;
}

