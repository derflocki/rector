<?php

namespace Rector\TypeDeclaration\Tests\Rector\ClassMethod\AddParamTypeDeclarationRector\Fixture;

use Rector\TypeDeclaration\Tests\Rector\ClassMethod\AddParamTypeDeclarationRector\ParentInterfaceWithChangeTypeInterface;

class DetectedByParentInterface implements ParentInterfaceWithChangeTypeInterface
{
    public function process($name)
    {
    }
}

?>
-----
<?php

namespace Rector\TypeDeclaration\Tests\Rector\ClassMethod\AddParamTypeDeclarationRector\Fixture;

use Rector\TypeDeclaration\Tests\Rector\ClassMethod\AddParamTypeDeclarationRector\ParentInterfaceWithChangeTypeInterface;

class DetectedByParentInterface implements ParentInterfaceWithChangeTypeInterface
{
    public function process(string $name)
    {
    }
}

?>
