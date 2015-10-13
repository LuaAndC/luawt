set -xue

echo 'os.exit = function() end' > exitless-busted
echo 'require "busted.runner"({ batch = true })' >> exitless-busted
valgrind \
    --error-exitcode=1 \
    --leak-check=full \
    --gen-suppressions=all \
    lua \
    exitless-busted --sort
rm exitless-busted
