/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bd7cc
 * Function: Caver::StoreController_Android::FetchProductsWithIdentifiers
 * Signature: undefined __thiscall FetchProductsWithIdentifiers(StoreController_Android * this, vector * param_1, TargetAction param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreController_Android::FetchProductsWithIdentifiers(std::vector<std::string,
   std::allocator<std::string > > const&, Caver::TargetAction<void (std::string const&,
   boost::shared_ptr<Caver::StoreProduct> const&, std::string const&)>) */

void __thiscall
Caver::StoreController_Android::FetchProductsWithIdentifiers
          (StoreController_Android *this,long *param_1,undefined8 *param_3)

{
  string *psVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  string *psVar5;
  long *plVar6;
  
  psVar5 = (string *)*param_1;
  psVar1 = (string *)param_1[1];
  if (psVar5 != psVar1) {
    do {
      puVar2 = (undefined8 *)
               std::
               map<std::string,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>>>
               ::operator[]((map<std::string,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>>>>
                             *)(this + 0x10),psVar5);
      plVar3 = (long *)puVar2[1];
      *puVar2 = *param_3;
      plVar6 = (long *)param_3[1];
      if (plVar6 != plVar3) {
        if (plVar6 != (long *)0x0) {
          plVar6[2] = plVar6[2] + 1;
        }
        if ((plVar3 != (long *)0x0) && (lVar4 = plVar3[2], plVar3[2] = lVar4 + -1, lVar4 + -1 == 0))
        {
          (**(code **)(*plVar3 + 0x18))();
        }
        puVar2[1] = plVar6;
      }
      boost::
      function<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>
      ::operator=((function<void(std::string_const&,boost::shared_ptr<Caver::StoreProduct>const&,std::string_const&)>
                   *)(puVar2 + 2),(function *)(param_3 + 2));
      AndroidQueueStoreProductFetch(psVar5);
      psVar5 = psVar5 + 8;
    } while (psVar1 != psVar5);
  }
  AndroidProcessStoreQueue();
  return;
}


