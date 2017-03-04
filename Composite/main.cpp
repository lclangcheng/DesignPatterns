#include <iostream>
#include <Composite.h>

using namespace std;

int main(int argc, char *argv[])
{
    Company* root = new ConcreteCompany("Corporation");
    Company* branchA = new ConcreteCompany("BranchA");
    Company* financeA = new FinanceDepartment("FinanceA");
    branchA->Add(financeA);
    Company* branchB = new ConcreteCompany("BranchB");
    root->Add(branchA);
    root->Add(branchB);

    root->Show(0);
    return 0;
}
