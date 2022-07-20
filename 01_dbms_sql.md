<details>
<summary> DBMS MCQs/One Liners </summary>

- The full form of DDL is ```Data definition language```.

- The property ```durability``` protects data from system failure.

- The ```3NF``` is based on the transitive dependency.

- The ```physical``` level of abstraction that describes how the data are actually stored.

- The ```Data definition language``` is used for performing tasks like creating the structure of the relations, deleting relations.

- The rows of a relation is known as ```tuple```.

- Both ```alter and create``` are DDL Command

- In case of shutdown, before committing, ```Rollback``` is done.

- The full form of TCL is ```Transaction control language```.

- The ```Drop``` command is used for removing (or deleting) a relation form the database.

- DBMS is ```collection of interrelated data```.

- The ```rectangle``` in ER diagram represents ```entity sets```.

- Relation is ```subset of a cartesian product of list of domains```.

- ```Super Key``` helps us to uniquely identify a tuple in a relation.

- The ```candidate key``` is known as the ```minimal super key```.

- ```Union, select, rename``` are all relational algebra operations.

- ```AS clause``` is used for Rename

- There are three levels of architecture in database - ```physical level, view level and user level```.

- Tree is used for representing ```Hierarchical model records```.

- ```Ellipse``` is used to represent ER diagram.

- Record is referred to as ```tuple```.

- The ```4NF``` normal form deals with multivalued dependency.

- ```DELETE``` is not a SQL command.

- ```Referential integrity``` is known as foreign key constraint.

- The ```DROP command``` is used to remove a stored function from the database.

- ```Modify operation``` is used after Look-up.

- The ```UPDATE``` command is used to change data in table.

- The ```4NF``` contains information about single entity. For each non-trivial multivalued dependencies X->Y, X is a superkey.

-  ```Join``` can be used to join two tables with same attributes.

- The full form of NTFS is ```New Technology FIle System```.

- The number of tuples of a relation is known as ```cardinality```.

- The ```relational calculus``` is a type of ```non-procedural language```. It simply describes what data needs to be retrieved.

- The conceptual view is referred to as the total view of a database.

- The ```conceptual view``` is referred to as the total view of a database.

- The ```foreign key``` is used to represent relation between two tables.

- ```COUNT``` is used to find the number of values in a column.

- The ```ALTER``` command is used to modify a column in a table.

- The attributes are a property of entities.

- Primary key should always be ```NOT NULL```.

- To select some particular columns, ```projection``` is used.

- ```View``` is a concept, hence it does not exist physically.

- ```NATURAL JOIN``` can also be termed as combination of Projection and cartesian product.

- The ```BETWEEN``` operator is used to compare a value to a list of literals values that have been specified

- The maximum number of children of B-tree of order m is ```m```.

- Table joined with self is known as ```Self Join```.

- The ```COUNT``` is used to return the ```total values``` in SQL.


</details>

<details>

<summary> SQL </summary>

``` LIKE '%s' ```
Like Operator

It has 2 wild card characters
<br/>
```%``` -> 0, 1, or multiple values
<br/>
```_``` -> Represents single character

---



```DISTINCT Country``` => shows unqiue or different values


---


```LEFT(col_name, x)``` and ```RIGHT(col_name, x)``` key words gives x charaters from left and right respectively and in operator to check something inside 

Example: ```SELECT DISTINCT city FROM station where LEFT(city, 1) in ('a', 'e', 'i', 'o', 'u') and RIGHT(city, 1) in ('a', 'e', 'i', 'o', 'u')```

---


</details>