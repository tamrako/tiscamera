



#ifndef PROPERTYIMPL_H_
#define PROPERTYIMPL_H_

namespace tcam
{

class Property;

/**
 * Interface used by property implementations
 */
class PropertyImpl
{

public:

    virtual ~PropertyImpl () {};

    /**
     * Set internal properties to the values described in parameter
     * @return true is given property values where successfully applied; else false
     */
    virtual bool setProperty (const Property&) = 0;

    /**
     * Fill given property with the currently used values
     * @return true if property was successfully filled; else false
     */
    virtual bool getProperty (Property&) = 0;
};

} /* namespace tcam */

#endif /* PROPERTYIMPL_H_ */