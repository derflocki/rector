<?php

namespace Rector\CodingStyle\Tests\Rector\Namespace_\ImportFullyQualifiedNamesRector\FixtureFunction;

class DoubleImportFunction
{
    public function create()
    {
        return \Safe\substr(1, 2);
    }

    public function emulate()
    {
        return \Safe\substr(4, 5);
    }
}

?>
-----
<?php

namespace Rector\CodingStyle\Tests\Rector\Namespace_\ImportFullyQualifiedNamesRector\FixtureFunction;

use function Safe\substr;
class DoubleImportFunction
{
    public function create()
    {
        return substr(1, 2);
    }

    public function emulate()
    {
        return substr(4, 5);
    }
}

?>
