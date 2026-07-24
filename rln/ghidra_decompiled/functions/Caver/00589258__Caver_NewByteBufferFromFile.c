/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00589258
 * Function: Caver::NewByteBufferFromFile
 * Signature: undefined __cdecl NewByteBufferFromFile(string * param_1, uint * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NewByteBufferFromFile(std::string const&, unsigned int*) */

void * Caver::NewByteBufferFromFile(string *param_1,uint *param_2)

{
  ulong uVar1;
  void *pvVar2;
  FILE *__stream;
  
  uVar1 = IsAndroidAssetsPath(param_1);
  if ((uVar1 & 1) != 0) {
    pvVar2 = (void *)NewByteBufferFromAndroidAsset(param_1,param_2);
    return pvVar2;
  }
  __stream = fopen(*(char **)param_1,"rb");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005892cc with catch @ 005892ac
                       catch(type#1 @ 00000000) { ... } // from try @ 0058932c with catch @ 005892ac
                        */
  if (__stream == (FILE *)0x0) {
                    /* try { // try from 00589318 to 00689323 has its CatchHandler @ 00589324 */
    printf("ERROR: Could not find \'%s\'\n",*(undefined8 *)param_1);
    pvVar2 = (void *)0x0;
  }
  else {
    fseek(__stream,0,2);
                    /* try { // try from 005892c4 to 006892cb has its CatchHandler @ 00589308 */
    uVar1 = ftell(__stream);
                    /* try { // try from 005892cc to 00689317 has its CatchHandler @ 005892ac */
    fseek(__stream,0,0);
    pvVar2 = operator_new__(uVar1 & 0xffffffff);
    fread(pvVar2,1,uVar1 & 0xffffffff,__stream);
    if (param_2 != (uint *)0x0) {
      *param_2 = (uint)uVar1;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005892c4 with catch @ 00589308
                        */
    fclose(__stream);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00589318 with catch @ 00589324
                        */
                    /* try { // try from 00589328 to 0068932b has its CatchHandler @ 00589334 */
                    /* try { // try from 0058932c to 00689337 has its CatchHandler @ 005892ac */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00589328 with catch @ 00589334
                        */
  return pvVar2;
}


